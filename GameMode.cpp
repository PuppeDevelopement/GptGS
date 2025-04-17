#include "GameMode.h"
#include "FortGameStateAthena.h"
#include "FortPlaylistAthena.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

AGameMode::AGameMode()
{
    UE_LOG(LogTemp, Log, TEXT("[GameMode] Constructor called."));
}

void AGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
    Super::InitGame(MapName, Options, ErrorMessage);

    UE_LOG(LogTemp, Log, TEXT("[GameMode] InitGame - Map: %s, Options: %s"), *MapName, *Options);

    LoadPlaylist();
}

void AGameMode::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Log, TEXT("[GameMode] BeginPlay called."));
}

void AGameMode::LoadPlaylist()
{
    static const FString PlaylistPath = TEXT("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

    UFortPlaylistAthena* LoadedPlaylist = Cast<UFortPlaylistAthena>(
        StaticLoadObject(UFortPlaylistAthena::StaticClass(), nullptr, *PlaylistPath)
    );

    if (!LoadedPlaylist)
    {
        UE_LOG(LogTemp, Error, TEXT("[GameMode] Failed to load Playlist_DefaultSolo!"));
        return;
    }

    AFortGameStateAthena* AthenaGameState = GetGameState<AFortGameStateAthena>();
    if (AthenaGameState)
    {
        AthenaGameState->CurrentPlaylistInfo.BasePlaylist = LoadedPlaylist;
        UE_LOG(LogTemp, Log, TEXT("[GameMode] Successfully loaded Playlist_DefaultSolo."));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("[GameMode] FortGameStateAthena not found."));
    }
}

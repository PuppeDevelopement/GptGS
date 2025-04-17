#pragma once

#include "FortGameModeAthena.h"
#include "GameMode.generated.h"

UCLASS()
class AGameMode : public AFortGameModeAthena
{
    GENERATED_BODY()

public:
    AGameMode();

    virtual void BeginPlay() override;
    virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

private:
    void LoadPlaylist();
};

#include "Gameserver.h"
#include "GameHooks.h"
#include <iostream>

DWORD WINAPI MainThread(HMODULE hModule) {
    AllocConsole();
    freopen("CONOUT$", "w", stdout);

    std::cout << "[GPTGS] Gameserver Loaded." << std::endl;

    InitHooks();

    // Keep running until you press END
    while (true) {
        if (GetAsyncKeyState(VK_END) & 1) break;
        Sleep(100);
    }

    FreeConsole();
    FreeLibraryAndExitThread(hModule, 0);
    return 0;
}

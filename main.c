#include <settings.h>
#include <windows.h>

#include "game.h"
#include "renderer.h"
#include "actions.h"

int main(void) {
    init_state();
    while (1) {
        render();
        handle_actions();
        Sleep(SETTINGS.speed);
    }

    return 0;
}

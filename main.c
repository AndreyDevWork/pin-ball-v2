#include <settings.h>
#include <windows.h>

#include "game.h"
#include "renderer.h"
#include "actions.h"
#include "physics.h"

int main(void) {
    init_state();
    while (1) {
        render();
        handle_actions();
        run_ball();
        Sleep(SETTINGS.speed);
    }

    return 0;
}

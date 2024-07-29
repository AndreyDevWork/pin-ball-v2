#include <settings.h>
#include <state.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <graphic.h>

#include "game.h"
#include "renderer.h"
#include "actions.h"
#include "physics.h"

int main(void) {
    init_state();
    while (player_top.score < SETTINGS.score_to_win && player_bottom.score < SETTINGS.score_to_win) {
        render();
        handle_actions();
        run();
        Sleep(SETTINGS.speed);
    }
    render();
    congratulation();

    nl();
    printf("Press any key to exit...\n");
    _getch();
    return 0;
}

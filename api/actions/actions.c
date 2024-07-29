#include "actions.h"
#include <conio.h>
#include <state.h>

void handle_actions() {
    handle_input();
}

static void handle_input() {
    if (_kbhit()) {
        char ch = _getch();

        if (ch == 'z') {
            player_top.location_x -= 1;
        }
        if (ch == 'x') {
            player_top.location_x += 1;
        }

        if (ch == 'n') {
            player_bottom.location_x -= 1;
        }
        if (ch == 'm') {
            player_bottom.location_x += 1;
        }
    }
}

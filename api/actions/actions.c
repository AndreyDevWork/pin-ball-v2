#include "actions.h"
#include <conio.h>
#include <state.h>

void handle_actions() {
    handle_input();
}

static void handle_input() {
    for (int i = 1; i <= 5; i++) {
        handle_top_player();
        handle_bottom_player();
    }
}

static void handle_top_player() {
    if (_kbhit()) {
        char ch = _getch();
        if (ch == 'z') {
            player_top.location_x -= 1;
        }
        if (ch == 'x') {
            player_top.location_x += 1;
        }
    }
}

static void handle_bottom_player() {
    if (_kbhit()) {
        char ch = _getch();
        if (ch == 'n') {
            player_bottom.location_x -= 1;
        }
        if (ch == 'm') {
            player_bottom.location_x += 1;
        }
    }
}

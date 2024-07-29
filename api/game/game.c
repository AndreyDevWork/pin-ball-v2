#include "game.h"

#include <graphic.h>
#include <settings.h>
#include <stdio.h>

#include "state.h"

void init_state() {
    init_players();
    init_ball();
}

void congratulation() {
    if (player_top.score == SETTINGS.score_to_win) {
        nl();
        printf("Congratulations, the player on top wins");
        return;
    }
    nl();
    printf("Congratulations, the player on bottom wins");
}

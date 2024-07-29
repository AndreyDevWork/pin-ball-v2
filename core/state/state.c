#include "state.h"
#include "settings.h"

#include <stdio.h>

struct player player_top;
struct player player_bottom;
struct ball ball;
struct render_state_cycle render_state_cycle;

void init_players() {
    player_top.location_x = SETTINGS.width / 2;
    player_top.location_y = 3;
    player_top.score = 0;

    player_bottom.location_x = SETTINGS.width / 2;
    player_bottom.location_y = SETTINGS.height - 2;
    player_bottom.score = 0;
}

void init_ball() {
    ball.ball_x = SETTINGS.width / 2;
    ball.ball_y = SETTINGS.height / 2;
    ball.ball_next_x = SETTINGS.width / 2 + 1;
    ball.ball_next_y = SETTINGS.height / 2 + 1;
};

void init_state_cycle() {
    render_state_cycle.x = 1;
    render_state_cycle.y = 1;
};


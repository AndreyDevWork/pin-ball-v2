#ifndef STATE_H
#define STATE_H

struct player {
    int score;
    int location_x;
    int location_y;
};

struct ball {
    int ball_x, ball_y;
    int ball_next_x, ball_next_y;
};

struct render_state_cycle {
    int x;
    int y;
};

static void init_players();

static void init_ball();

void init_state();

extern struct player player_top;
extern struct player player_bottom;
extern struct ball ball;
extern struct render_state_cycle render_state_cycle;

#endif //STATE_H

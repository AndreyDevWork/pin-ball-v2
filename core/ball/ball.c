#include "ball.h"
#include <state.h>
#include <enums.h>


bool is_ball() {
    int matches = 0;

    render_cycle.x == ball.ball_next_x ? matches++ : 0;
    render_cycle.y == ball.ball_next_y ? matches++ : 0;

    return matches == MATCHES_BALL;
}

#include "ball.h"
#include <state.h>

bool is_ball() {
    return render_cycle.x == ball.ball_next_x && render_cycle.y == ball.ball_next_y;
}

bool is_to_left_top() {
    return is_to_left() && is_to_top();
}

bool is_to_right_top() {
    return is_to_right() && is_to_top();
}

bool is_to_left_bottom() {
    return is_to_left() && is_to_bottom();
}

bool is_to_right_bottom() {
    return is_to_right() && is_to_bottom();
}

static bool is_to_left() {
    return ball.ball_x > ball.ball_next_x;
}

static bool is_to_right() {
    return ball.ball_x < ball.ball_next_x;
}

bool is_to_top() {
    return ball.ball_y > ball.ball_next_y;
}

bool is_to_bottom() {
    return ball.ball_y < ball.ball_next_y;
}


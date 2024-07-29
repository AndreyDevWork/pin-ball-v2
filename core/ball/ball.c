#include "ball.h"
#include <state.h>

bool is_ball() {
    return render_cycle.x == ball.ball_next_x && render_cycle.y == ball.ball_next_y;
}

#include "wall.h"
#include <settings.h>
#include <state.h>

#include "ball.h"

bool is_wall(int x, int y) {
    if (is_ball()) {
        return false;
    }
    return is_wall_left(x) || is_wall_right(x) || is_wall_top(y) || is_wall_bottom(y);
}

bool is_wall_left(int x) {
    return x == 1;
}

bool is_wall_right(int x) {
    return x == SETTINGS.width;
}

bool is_wall_top(int y) {
    return y == 1;
}

bool is_wall_bottom(int y) {
    return y == SETTINGS.height;
}

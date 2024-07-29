#include "player.h"

#include <settings.h>
#include <state.h>
#include "ball.h"
#include "wall.h"


bool is_player(struct player player) {
    if (is_ball() || is_wall(render_cycle.x, render_cycle.y)) return false;

    int start_x = player.location_x - SETTINGS.width_player / 2;
    int end_x = player.location_x + SETTINGS.width_player / 2;
    int y = render_cycle.y;

    bool x_in_range = (render_cycle.x >= start_x && render_cycle.x <= end_x);
    bool y_matches = (y == player.location_y);

    return x_in_range && y_matches;
}

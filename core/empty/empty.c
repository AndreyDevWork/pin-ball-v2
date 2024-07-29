#include "empty.h"

#include <state.h>

#include "ball.h"
#include "player.h"
#include "wall.h"

bool is_empty() {
    int matches = 0;

    if (is_wall(render_cycle.x, render_cycle.y)) return false;
    if (is_ball()) return false;
    if (is_player(player_top)) return false;
    if (is_player(player_bottom)) return false;

    return true;
}

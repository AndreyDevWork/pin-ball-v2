#include "player.h"

#include <state.h>

#include "ball.h"
#include "renderer.h"
#include "wall.h"

bool is_player(struct player player) {
    int matches = 0;

    if (is_ball()) return false;
    if (is_wall()) return false;

    render_cycle.y == player.location_y ? matches++ : 0;
    render_cycle.x == player.location_x ? matches++ : 0;
    render_cycle.x == player.location_x - 1 ? matches++ : 0;
    render_cycle.x == player.location_x - 2 ? matches++ : 0;
    render_cycle.x == player.location_x + 1 ? matches++ : 0;
    render_cycle.x == player.location_x + 2 ? matches++ : 0;

    return matches == MATCHES_PLAYER;
}

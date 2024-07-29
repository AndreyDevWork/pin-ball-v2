#include "wall.h"
#include <settings.h>
#include <state.h>

bool is_wall() {
    bool matches = 0;

    render_cycle.y == 1 ? matches = true : 0;
    render_cycle.y == SETTINGS.height ? matches = true : 0;
    render_cycle.x == 1 ? matches = true : 0;
    render_cycle.x == SETTINGS.width ? matches = true : 0;

    return matches;
}

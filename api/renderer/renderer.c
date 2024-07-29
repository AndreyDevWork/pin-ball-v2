#include "renderer.h"

#include <graphic.h>
#include <settings.h>

#include "ball.h"
#include "state.h"

void render() {
    cls();

    for (render_cycle.y = 1; render_cycle.y <= SETTINGS.height; render_cycle.y++) {
        for (render_cycle.x = 1; render_cycle.x <= SETTINGS.width; render_cycle.x++) {
            render_walls();
            render_ball();
            render_empty();
        }
        nl();
    }
}

static void render_walls() {
    is_wall() ? draw_wall() : 0;
}

static void render_ball() {
    is_ball() ? draw_ball() : 0;
}

static void render_empty() {
    is_empty() ? draw_empty() : 0;
}

static bool is_wall() {
    bool matches = 0;

    render_cycle.y == 1 ? matches = true : 0;
    render_cycle.y == SETTINGS.height ? matches = true : 0;
    render_cycle.x == 1 ? matches = true : 0;
    render_cycle.x == SETTINGS.width ? matches = true : 0;

    return matches;
}

static bool is_empty() {
    int matches = 0;

    if (is_wall()) return false;
    if (is_ball()) return false;

    return true;
}

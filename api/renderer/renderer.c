#include "renderer.h"
#include <graphic.h>
#include <settings.h>
#include <windows.h>
#include "ball.h"
#include "empty.h"
#include "state.h"
#include "wall.h"

void render() {
    while (1) {
        cls();
        draw();
        Sleep(SETTINGS.speed);
    }
}

static void draw() {
    for (render_cycle.y = 1; render_cycle.y <= SETTINGS.height; render_cycle.y++) {
        for (render_cycle.x = 1; render_cycle.x <= SETTINGS.width; render_cycle.x++) {
            render_walls();
            render_ball();
            render_empty();
            render_top_player();
            render_bottom_player();
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

static void render_top_player() {
    is_player(player_top) ? draw_player() : 0;
}

static void render_bottom_player() {
    is_player(player_bottom) ? draw_player() : 0;
}

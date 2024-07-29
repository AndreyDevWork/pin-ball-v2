#ifndef RENDERER_H
#define RENDERER_H

enum matches {
    MATCHES_BALL = 2,
};

void render();

static void render_walls();

static void render_ball();

static void render_empty();

static bool is_wall();

static bool is_empty();

#endif //RENDERER_H

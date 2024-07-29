#ifndef RENDERER_H
#define RENDERER_H

enum matches {
    MATCHES_BALL = 2,
    MATCHES_PLAYER = 2
};

void render();

static void render_walls();

static void render_ball();

static void render_empty();

#endif //RENDERER_H

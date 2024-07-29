#include "physics.h"
#include <state.h>
#include "ball.h"
#include <stdio.h>
#include "wall.h"

void run() {
    handle_wall_collision();
    run_ball();
}

static void handle_wall_collision() {
    if (is_wall_left(ball.ball_next_x)) {
        printf("UDAR");
        ball.ball_next_x += 2;
    }

    if (is_wall_right(ball.ball_next_x)) {
        printf("UDAR");
        ball.ball_next_x -= 2;
    }

    if (is_wall_top(ball.ball_next_y)) {
        printf("UDAR");
        ball.ball_next_y += 2;
    }

    if (is_wall_bottom(ball.ball_next_y)) {
        printf("UDAR");
        ball.ball_next_y -= 2;
    }
}

static void run_ball() {
    if (is_to_right_top()) {
        to_right_top();
        return;
    }

    if (is_to_left_top()) {
        to_left_top();
        return;
    }

    if (is_to_right_bottom()) {
        to_right_bottom();
        return;
    }

    if (is_to_left_bottom()) {
        to_left_bottom();
        return;
    }
}

static void to_right_top() {
    to_right();
    to_top();
}

static void to_left_top() {
    to_left();
    to_top();
}

static void to_right_bottom() {
    to_right();
    to_bottom();
}

static void to_left_bottom() {
    to_left();
    to_bottom();
}

static void to_left() {
    ball.ball_x = ball.ball_next_x;
    ball.ball_next_x -= 1;
}

static void to_top() {
    ball.ball_y = ball.ball_next_y;
    ball.ball_next_y -= 1;
}

static void to_right() {
    ball.ball_x = ball.ball_next_x;
    ball.ball_next_x += 1;
}

static void to_bottom() {
    ball.ball_y = ball.ball_next_y;
    ball.ball_next_y += 1;
}

#include "graphic.h"

#include <stdio.h>

void draw_wall() {
    printf("%c", WALL);
}

void draw_player() {
    printf("%c", PLAYER);
}

void draw_ball() {
    printf("%c", BALL);
}

void draw_space() {
    printf("%c", SPACE);
}

void nl() {
    printf("\n");
}

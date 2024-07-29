#include "graphic.h"
#include <stdio.h>
#include <stdlib.h>
#include "enums.h"

void draw_wall() {
    printf("%c", WALL);
}

void draw_player() {
    printf("%c", PLAYER);
}

void draw_ball() {
    printf("%c", BALL);
}

void draw_empty() {
    printf("%c", SPACE);
}

void nl() {
    printf("\n");
}

void cls() {
    system("cls");
}

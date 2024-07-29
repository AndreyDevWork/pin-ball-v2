#ifndef GRAPHIC_H
#define GRAPHIC_H

enum graphic {
    WALL = '#',
    PLAYER = '=',
    BALL = 'o',
    SPACE = ' '
};

void draw_wall();

void draw_player();

void draw_ball();

void draw_space();

void nl();

#endif //GRAPHIC_H

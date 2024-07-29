#ifndef GRAPHIC_H
#define GRAPHIC_H

enum graphic {
    WALL = '#',
    PLAYER = '=',
    BALL = 'o',
    SPACE = ' '
};

void drawWall();

void drawPlayer();

void drawBall();

void drawSpace();

#endif //GRAPHIC_H

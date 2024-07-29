#include <state.h>

#include "game.h"
#include "renderer.h"
#include <windows.h>

#include <stdio.h>


int main(void) {
    init_state();

    while (1) {
        render();
        ball.ball_next_x++;
        Sleep(100);
    }

    return 0;
}

#ifndef PLAYER_H
#define PLAYER_H

struct player {
    int score;
    int location_x;
    int location_y;
};

bool is_player(struct player player);

#endif //PLAYER_H

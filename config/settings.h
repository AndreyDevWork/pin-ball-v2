#ifndef SETTINGS_H
#define SETTINGS_H

struct settings {
    int width;
    int height;
    int width_player;
    int score_to_win;
    int speed;
};

extern const struct settings SETTINGS;

#endif //SETTINGS_H

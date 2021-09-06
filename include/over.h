/*
** EPITECH PROJECT, 2021
** over.h
** File description:
** game over
*/

#ifndef OVER_H_
#define OVER_H_

#include <stddef.h>
#include "proto.h"

static const char *OV_O_F[2] = {
    "res/game_over.png",
    NULL
};

static const object_type OV_O_T[1] = {
    BACKGROUND
};

static const sfVector2f OV_O_P[1] = {
    {0, 0}
};

static const sfIntRect OV_O_R[1] = {
    {0, 0, 0, 0}
};

static const char *OV_B_F[8] = {
    "res/button_quit2.png",
    "res/button_menu2.png",
    "res/button_restart2.png",
    "res/button_music.png",
    "res/button_music_off.png",
    "res/button_sound.png",
    "res/button_sound_off.png",
    NULL
};

static const sfVector2f OV_B_P[7] = {
    {600, 700},
    {900, 700},
    {1200, 700},
    {25, 885},
    {25, 885},
    {205, 885},
    {205, 885}
};

static const sfVector2f OV_B_S[7] = {
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1}
};

static const callback OV_B_C[7] = {
    close_win,
    complex_menu,
    restart,
    music,
    nothing,
    sound,
    nothing
};

#endif
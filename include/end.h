/*
** EPITECH PROJECT, 2021
** over.h
** File description:
** game over
*/

#ifndef END_H_
#define END_H_

#include <stddef.h>
#include "proto.h"

static const char *EN_O_F[2] = {
    "res/end.png",
    NULL
};

static const object_type EN_O_T[1] = {
    BACKGROUND
};

static const sfVector2f EN_O_P[1] = {
    {0, 0}
};

static const sfIntRect EN_O_R[1] = {
    {0, 0, 0, 0}
};

static const char *EN_B_F[8] = {
    "res/button_quit2.png",
    "res/button_menu2.png",
    "res/button_restart2.png",
    "res/button_music.png",
    "res/button_music_off.png",
    "res/button_sound.png",
    "res/button_sound_off.png",
    NULL
};

static const sfVector2f EN_B_P[7] = {
    {600, 700},
    {900, 700},
    {1200, 700},
    {25, 885},
    {25, 885},
    {205, 885},
    {205, 885}
};

static const sfVector2f EN_B_S[7] = {
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1}
};

static const callback EN_B_C[7] = {
    close_win,
    complex_menu,
    restart,
    music,
    nothing,
    sound,
    nothing
};

#endif
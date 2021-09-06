/*
** EPITECH PROJECT, 2021
** pause.h
** File description:
** pause header
*/

#ifndef PAUSE_H_
#define PAUSE_H_

#include <stddef.h>
#include "proto.h"

static const char *PS_O_F[2] = {
    "res/pause_settings.png",
    NULL
};

static const object_type PS_O_T[1] = {
    BACKGROUND
};

static const sfVector2f PS_O_P[1] = {
    {0, 0}
};

static const sfIntRect PS_O_R[1] = {
    {0, 0, 0, 0}
};

static const char *PS_B_F[11] = {
    "res/button_close.png",
    "res/button_on.png",
    "res/button_off.png",
    "res/button_on.png",
    "res/button_off.png",
    "res/button_play.png",
    "res/button_restart.png",
    "res/button_menu.png",
    "res/button_close.png",
    "res/button_help.png",
    NULL
};

static const sfVector2f PS_B_P[10] = {
    {1355, 213},
    {1000, 407},
    {1000, 407},
    {1000, 507},
    {1000, 507},
    {616, 628},
    {792, 623},
    {967, 623},
    {1145, 622},
    {860, 880}
};

static const sfVector2f PS_B_S[10] = {
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {0.5, 0.5},
    {1, 1},
    {1, 1},
    {1.6, 1.6},
    {0.7, 0.7}
};

static const callback PS_B_C[10] = {
    play,
    music,
    nothing,
    sound,
    nothing,
    play,
    restart,
    complex_menu,
    close_win,
    help
};

#endif
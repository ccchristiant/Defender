/*
** EPITECH PROJECT, 2021
** settings.h
** File description:
** settings header
*/

#ifndef SETTINGS_H_
#define SETTINGS_H_

#include <stddef.h>
#include "proto.h"

static const char *ST_O_F[2] = {
    "res/s_ff.jpg",
    NULL
};

static const object_type ST_O_T[1] = {
    BACKGROUND
};

static const sfVector2f ST_O_P[1] = {
    {0, 0}
};

static const sfIntRect ST_O_R[1] = {
    {0, 0, 0, 0}
};

static const char *ST_B_F[9] = {
    "res/button_close.png",
    "res/button_on.png",
    "res/button_off.png",
    "res/button_on.png",
    "res/button_off.png",
    "res/button_play.png",
    "res/button_close.png",
    "res/button_menu.png",
    NULL
};

static const sfVector2f ST_B_P[8] = {
    {1355, 213},
    {1000, 420},
    {1000, 420},
    {1000, 520},
    {1000, 520},
    {694, 623},
    {1060, 622},
    {870, 623}
};

static const sfVector2f ST_B_S[8] = {
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {0.5, 0.5},
    {1.6, 1.6},
    {1, 1}
};

static const callback ST_B_C[8] = {
    simple_menu,
    music,
    nothing,
    sound,
    nothing,
    play,
    close_win,
    simple_menu
};

#endif
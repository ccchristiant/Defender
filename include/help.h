/*
** EPITECH PROJECT, 2021
** help.h
** File description:
** how to play
*/

#ifndef HELP_H_
#define HELP_H_

#include <stddef.h>
#include "proto.h"

static const char *HP_O_F[2] = {
    "res/help_1.png",
    NULL
};

static const object_type HP_O_T[1] = {
    BACKGROUND
};

static const sfVector2f HP_O_P[1] = {
    {0, 0}
};

static const sfIntRect HP_O_R[1] = {
    {0, 0, 0, 0}
};

static const char *HP_B_F[6] = {
    "res/button_close.png",
    "res/button_settings.png",
    "res/button_menu.png",
    "res/button_play.png",
    "res/button_right.png",
    NULL
};

static const sfVector2f HP_B_P[5] = {
    {1620, 116},
    {30, 225},
    {30, 40},
    {890, 912},
    {1578, 906},
};

static const sfVector2f HP_B_S[5] = {
    {1.6, 1.6},
    {1, 1},
    {1, 1},
    {0.5, 0.5},
    {1, 1},
};

static const callback HP_B_C[5] = {
    simple_menu,
    settings,
    simple_menu,
    play,
    helpp
};

#endif
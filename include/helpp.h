/*
** EPITECH PROJECT, 2021
** helpp.h
** File description:
** how to play2
*/

#ifndef HELPP_H_
#define HELPP_H_

#include <stddef.h>
#include "proto.h"

static const char *PP_O_F[2] = {
    "res/help_2.png",
    NULL
};

static const object_type PP_O_T[1] = {
    BACKGROUND
};

static const sfVector2f PP_O_P[1] = {
    {0, 0}
};

static const sfIntRect PP_O_R[1] = {
    {0, 0, 0, 0}
};

static const char *PP_B_F[6] = {
    "res/button_close.png",
    "res/button_settings.png",
    "res/button_menu.png",
    "res/button_play.png",
    "res/button_left.png",
    NULL
};

static const sfVector2f PP_B_P[5] = {
    {1620, 116},
    {30, 225},
    {30, 40},
    {890, 912},
    {200, 906}
};

static const sfVector2f PP_B_S[5] = {
    {1.6, 1.6},
    {1, 1},
    {1, 1},
    {0.5, 0.5},
    {1, 1}
};

static const callback PP_B_C[5] = {
    simple_menu,
    settings,
    simple_menu,
    play,
    help
};

#endif
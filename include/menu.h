/*
** EPITECH PROJECT, 2021
** menu.h
** File description:
** menu header
*/

#ifndef MENU_H_
#define MENU_H_

#include <stddef.h>
#include "proto.h"

static const char *MN_O_F[2] = {
    "res/home_page.jpg",
    NULL
};

static const object_type MN_O_T[1] = {
    BACKGROUND,
};

static const sfVector2f MN_O_P[1] = {
    {0, 0}
};

static const sfIntRect MN_O_R[1] = {
    {0, 0, 0, 0}
};

static const char *MN_B_F[9] = {
    "res/button_play.png",
    "res/button_close.png",
    "res/button_settings.png",
    "res/button_music.png",
    "res/button_music_off.png",
    "res/button_sound.png",
    "res/button_sound_off.png",
    "res/button_help.png",
    NULL
};

static const sfVector2f MN_B_P[8] = {
    {795, 499},
    {1745, 37},
    {1725, 885},
    {25, 885},
    {25, 885},
    {205, 885},
    {205, 885},
    {1390, 887}
};

static const sfVector2f MN_B_S[8] = {
    {1, 1},
    {1.3, 1.3},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1},
    {1, 1}
};

static const callback MN_B_C[8] = {
    play,
    close_win,
    settings,
    music,
    nothing,
    sound,
    nothing,
    help
};

#endif
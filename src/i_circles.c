/*
** EPITECH PROJECT, 2021
** i_circles.c
** File description:
** i_circles function
*/

#include "game.h"

__attribute__ ((unused))static const char *GM_O_F[221];

__attribute__ ((unused))static const char *GM_B_F[9];

void i_circles(global_t *core)
{
    for (int i = 0; i < 9; ++i) {
        core->circles[i] = sfCircleShape_create();
        sfCircleShape_setPointCount(core->circles[i], GM_CIRC_PT_CT[i]);
        sfCircleShape_setRadius(core->circles[i], GM_CIRC_RAD_ORG[i]);
        sfCircleShape_setOrigin(core->circles[i], (sfVector2f){GM_CIRC_RAD_ORG[i], GM_CIRC_RAD_ORG[i]});
        sfCircleShape_setPosition(core->circles[i], GM_CIRC_P[i]);
    }
}
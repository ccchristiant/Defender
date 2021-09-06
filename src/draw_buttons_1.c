/*
** EPITECH PROJECT, 2021
** draw_buttons_1.c
** File description:
** draw_buttons_1 functions
*/

#include "struct.h"
#include <stdio.h>

void draw_music_sound_1(global_t *core, __attribute__ ((unused))scenes_t scn, int *j)
{
    *j += (*j == 4 && core->music_state == 1);
    *j += (*j == 6 && core->sound_state == 1);
}

void draw_music_sound_2(global_t *core, __attribute__ ((unused))scenes_t scn, int *j)
{
    *j += (*j == 2 && core->music_state == 1);
    *j += (*j == 4 && core->sound_state == 1);
}

void draw_upgrade_sell(global_t *core, scenes_t scn, int *j)
{
    if (core->ck_tow != 0 &&
        core->occ_spots[core->ck_tow - 1] != 0)
        sfRenderWindow_drawSprite(core->wn, scn.btts[*j].spt, NULL);
}
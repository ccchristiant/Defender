/*
** EPITECH PROJECT, 2021
** draw_in_game_2.c
** File description:
** draw_in_game_2 functions
*/

#include "struct.h"
#include <stdio.h>

void draw_range(global_t *core, scenes_t scn, int *i)
{
    int a = *i + core->ck_tow - 1;

    if (*i == 10) {
        if (a != 0 && core->ck_tow != 0 &&
            core->occ_spots[core->ck_tow - 1] != 0 &&
            core->occ_spots[core->ck_tow - 1] != 4)
        sfRenderWindow_drawSprite(core->wn, scn.objs[a]->spt, NULL);
        *i = 19;
    }
}

void draw_monsters(global_t *core, scenes_t scn, int *i)
{
    if (*i == 19)
        for (; *i < 69; ++(*i))
            if (scn.objs[*i]->health > 0)
                sfRenderWindow_drawSprite(core->wn, scn.objs[*i]->spt, NULL);
}

void draw_towers(global_t *core, scenes_t scn, int *i)
{
    int a = 0;

    if (*i == 69) {
        for (int j = 0; j < 9; ++j) {
            a = *i + core->occ_spots[j] - 1 + core->up_tower[j] * 45;
            if (core->occ_spots[j] != 0)
                sfRenderWindow_drawSprite(core->wn, scn.objs[a]->spt, NULL);
            *i += 5;
        }
        *i = 204;
    }
}

void draw_bars(global_t *core, scenes_t scn, int *i)
{
    int a = 204 + core->life;
    int b = 209 + core->m_alive / 10 + (core->m_alive % 10 != 0);

    if (*i == 205) {
        if (core->life > 0)
            sfRenderWindow_drawSprite(core->wn, scn.objs[a]->spt, NULL);
        if (core->m_alive > 0)
            sfRenderWindow_drawSprite(core->wn, scn.objs[b]->spt, NULL);
        sfRenderWindow_drawText(core->wn, core->text_money, NULL);
        sfRenderWindow_drawText(core->wn, core->text_score, NULL);
        *i = 215;
    }
}

void draw_c_tower(global_t *core, scenes_t scn, int *i)
{
    int a = 214 + core->pk_tow;

    if (*i == 215 && core->pk_tow != 0 && core->nb_tower != 9)
        sfRenderWindow_drawSprite(core->wn, scn.objs[a]->spt, NULL);
}
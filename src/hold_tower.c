/*
** EPITECH PROJECT, 2021
** hold_tower.c
** File description:
** hold_tower function
*/

#include "struct.h"

void hold_tower(global_t *core, scenes_t scn)
{
    sfVector2f pos = {core->c_move.x - 60, core->c_move.y - 100};

    if (core->nb_tower == 9)
        return;
    for (int i = 1; i <= 5; ++i)
        if (core->pk_tow == i) {
            sfSprite_setPosition(scn.objs[214 + i]->spt, pos);
            break;
        }
}
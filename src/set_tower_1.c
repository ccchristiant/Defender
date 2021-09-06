/*
** EPITECH PROJECT, 2021
** set_tower_1.c
** File description:
** set_tower_1 function
*/

#include "struct.h"

void set_tower_1(global_t *core, scenes_t scn)
{
    sfFloatRect rect;

    for (int i = 69, j = 0; i <= 109; i += 5, ++j) {
        rect = sfSprite_getGlobalBounds(scn.objs[i]->spt);
        if (sfFloatRect_contains(&rect, core->c_button.x, core->c_button.y) &&
            core->pk_tow == 0 && core->occ_spots[j] != 0)
            core->ck_tow = j + 1;
    }
}
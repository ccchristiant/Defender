/*
** EPITECH PROJECT, 2021
** set_tower.c
** File description:
** set_tower function
*/

#include "struct.h"
#include "my_macros.h"

void set_tower(global_t *core, scenes_t scn)
{
    sfFloatRect rect;

    if (core->nb_tower == 9)
        return;
    for (int i = 0; i < 9; ++i) {
        rect = sfSprite_getGlobalBounds(scn.objs[i + 1]->spt);
        if (sfFloatRect_contains(&rect, core->c_button.x, core->c_button.y)
            && core->pk_tow != 0 && core->occ_spots[i] == 0) {
            core->money -= PRICES[core->pk_tow - 1];
            core->occ_spots[i] = core->pk_tow;
            core->pk_tow = 0;
        }
    }
}
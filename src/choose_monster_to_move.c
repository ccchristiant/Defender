/*
** EPITECH PROJECT, 2021
** choose_monster_to_move.c
** File description:
** choose_monster_to_move function
*/

#include "struct.h"
#include <stdlib.h>

void choose_monster_to_move(global_t *core, scenes_t scn)
{
    int rnk_monst = 0;
    int i = 18;
    if (core->global_seconds > 20)
        core->idx_max = 40;
    if (core->global_seconds > 35)
        core->idx_max = 50;
    if (core->frequency_seconds > 3) {
        if (core->m_moved != 50) {
            rnk_monst = (rand() % (core->idx_max - core->m_moved)) + 1;
            for (int j = 0; j < rnk_monst; i++)
                j += (scn.objs[i+1]->move == 0 && scn.objs[i+1]->health != 0);
            scn.objs[i]->move = 1;
            scn.objs[i]->pos.x += (float)(rand() % 150) + 50;
            sfSprite_setPosition(scn.objs[i]->spt, scn.objs[i]->pos);
            ++core->m_moved;
            core->m_moved_tab[core->id_m_tab] = i;
            ++core->id_m_tab;
        }
        sfClock_restart(core->frequency_clock);
    }
}
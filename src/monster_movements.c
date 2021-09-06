/*
** EPITECH PROJECT, 2021
** monster_movements.c
** File description:
** monster_movements function
*/

#include "proto.h"

void all_monster_movements(global_t *core, scenes_t scn)
{
    for (int i = 19; i < 69; ++i) {
        can_move(core, scn, i);
        remove_sp_dmged(scn, i);
        remove_slowed(scn, i);
        remove_frozen(scn, i);
        remove_db_dmged(scn, i);
    }
}
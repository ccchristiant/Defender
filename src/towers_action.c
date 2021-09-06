/*
** EPITECH PROJECT, 2021
** towers_action.c
** File description:
** towers_action function
*/

#include "proto.h"

static const tower_action_t tab[5] = {
    {1, &tower_simple_damage},
    {2, &tower_slow},
    {3, &tower_freeze},
    {4, &tower_money},
    {5, &tower_double_damage_1},
};

void towers_action(global_t *core, scenes_t scn)
{
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 5; ++j)
            if (core->occ_spots[i] == tab[j].idx) {
                tab[j].function(core, scn, i);
                break;
            }
}
/*
** EPITECH PROJECT, 2021
** i_scenes.c
** File description:
** i_scenes function
*/

#include "struct.h"

void nb_tower_occupied(global_t *core)
{
    int nb = 0;
    for (int k = 0; k < 9; ++k) {
        if (core->occ_spots[k] != 0)
            nb++;
    }
    core->nb_tower = nb;
}
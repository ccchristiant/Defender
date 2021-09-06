/*
** EPITECH PROJECT, 2021
** callback_upgrade_sell.c
** File description:
** callback_upgrade_sell function
*/

#include "struct.h"
#include "my_macros.h"

void upgrade(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    if (core->ck_tow != 0 && core->up_tower[core->ck_tow - 1] < 2
        && core->occ_spots[core->ck_tow - 1] != 0 &&
        core->money - 20 >= 0) {
        core->money -= 20;
        ++core->up_tower[core->ck_tow - 1];
    }
}

void sell(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    for (int i = 0; i < 9; ++i)
        if (core->ck_tow == i + 1 && core->occ_spots[i] != 0) {
            core->money += PRICES[core->occ_spots[i] - 1] / 2;
            core->occ_spots[i] = 0;
            core->up_tower[i] = 0;
            --core->nb_tower;
            core->ck_tow = 0;
        }
}
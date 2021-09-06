/*
** EPITECH PROJECT, 2021
** i_clocks.c
** File description:
** i_clocks function
*/

#include "struct.h"

void i_clocks(global_t *core)
{
    core->global_clock = sfClock_create();
    core->global_seconds = 0;
    core->money_clock = sfClock_create();
    core->money_seconds = 0;
    core->score_clock = sfClock_create();
    core->score_seconds = 0;
    core->frequency_clock = sfClock_create();
    core->frequency_seconds = 0;
    for (int i = 0; i < 9; ++i) {
        core->tower_clocks[i].clock = sfClock_create();
        core->tower_clocks[i].seconds = 0;
    }
}
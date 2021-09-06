/*
** EPITECH PROJECT, 2021
** upd_core_clocks.c
** File description:
** upd_core_clocks function
*/

#include "struct.h"

void upd_core_clocks(global_t *core)
{
    core->global_time = sfClock_getElapsedTime(core->global_clock);
    core->global_seconds = sfTime_asSeconds(core->global_time);
    core->money_time = sfClock_getElapsedTime(core->money_clock);
    core->money_seconds = sfTime_asSeconds(core->money_time);
    core->score_time = sfClock_getElapsedTime(core->score_clock);
    core->score_seconds = sfTime_asSeconds(core->score_time);
    core->frequency_time = sfClock_getElapsedTime(core->frequency_clock);
    core->frequency_seconds = sfTime_asSeconds(core->frequency_time);
    for (int i = 0; i < 9; ++i) {
        core->tower_clocks[i].time = sfClock_getElapsedTime(core->tower_clocks[i].clock);
        core->tower_clocks[i].seconds = sfTime_asSeconds(core->tower_clocks[i].time);
    }
}
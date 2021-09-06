/*
** EPITECH PROJECT, 2021
** upd_clock.c
** File description:
** upd_clock function
*/

#include "proto.h"

void upd_clock(global_t *core, scenes_t scn)
{
    upd_core_clocks(core);
    upd_monster_clocks(scn);
}
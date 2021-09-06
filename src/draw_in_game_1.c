/*
** EPITECH PROJECT, 2021
** draw_in_game_1.c
** File description:
** draw_in_game_1 function
*/

#include "proto.h"

void draw_in_game(global_t *core, scenes_t scn, int *i)
{
    draw_range(core, scn, i);
    draw_monsters(core, scn, i);
    draw_towers(core, scn, i);
    draw_bars(core, scn, i);
    draw_c_tower(core, scn, i);
}
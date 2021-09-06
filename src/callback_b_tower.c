/*
** EPITECH PROJECT, 2021
** callback_b_tower.c
** File description:
** cb b_tower buttons
*/

#include "struct.h"

void pick_tower_1(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    if (core->money - 20 >= 0)
        core->pk_tow = 1;
}

void pick_tower_2(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    if (core->money - 40 >= 0)
        core->pk_tow = 2;
}

void pick_tower_3(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    if (core->money - 50 >= 0)
        core->pk_tow = 3;
}

void pick_tower_4(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    if (core->money - 70 >= 0)
        core->pk_tow = 4;
}

void pick_tower_5(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    if (core->money - 80 >= 0)
        core->pk_tow = 5;
}
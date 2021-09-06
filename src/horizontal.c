/*
** EPITECH PROJECT, 2021
** horizontal.c
** File description:
** horizontal function
*/

#include "struct.h"

void horizontal_1(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y == 695 + offsets[2] &&
        scn.objs[idx]->pos.x > 1455 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.x -= 1;
}

void horizontal_2(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y == 430 + offsets[2] &&
        scn.objs[idx]->pos.x <= 1235 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x > 1035 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.x -= 1;
}

void horizontal_3(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y == 220 + offsets[2] &&
        scn.objs[idx]->pos.x <= 555 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x > 385 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.x -= 1;
}

void horizontal_4(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y == 485 + offsets[2] &&
        scn.objs[idx]->pos.x <= 165 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x > 145 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.x -= 1;
}

void horizontal_5(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y == 765 + offsets[2] &&
        scn.objs[idx]->pos.x >= 145 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.x < 365 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.x += 1;
}
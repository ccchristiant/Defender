/*
** EPITECH PROJECT, 2021
** vertical.c
** File description:
** vertical function
*/

#include "struct.h"

void vertical_1(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y <= 575 + offsets[2] &&
        scn.objs[idx]->pos.y > 530 + offsets[2] &&
        scn.objs[idx]->pos.x == 1335 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.y -= 1;
}

void vertical_2(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y >= 530 + offsets[2] &&
        scn.objs[idx]->pos.y < 555 + offsets[2] &&
        scn.objs[idx]->pos.x == 935 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.y += 1;
}

void vertical_3(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y <= 555 + offsets[2] &&
        scn.objs[idx]->pos.y > 320 + offsets[2] &&
        scn.objs[idx]->pos.x == 655 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.y -= 1;
}

void vertical_4(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y >= 320 + offsets[2] &&
        scn.objs[idx]->pos.y < 365 + offsets[2] &&
        scn.objs[idx]->pos.x == 285 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.y += 1;
}

void vertical_5(scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y >= 885 + offsets[2] &&
        scn.objs[idx]->pos.y < 985 + offsets[2] &&
        scn.objs[idx]->pos.x == 485 + offsets[0] + offsets[1])
        scn.objs[idx]->pos.y += 1;
}
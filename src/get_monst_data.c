/*
** EPITECH PROJECT, 2021
** get_monst_data.c
** File description:
** get_monst_data function
*/

#include "struct.h"

int get_shift(scenes_t scn, int i)
{
    if (scn.objs[i]->type == SM_ENEMY)
        return 310;
    else if (scn.objs[i]->type == MD_ENEMY)
        return 315;
    else
        return 317;
}

int get_max(scenes_t scn, int i)
{
    if (scn.objs[i]->type == SM_ENEMY)
        return 3400;
    else if (scn.objs[i]->type == MD_ENEMY)
        return 3100;
    else
        return 2800;
}

sfInt32 get_clock_limiter_anim(scenes_t scn, int i)
{
    if (scn.objs[i]->type == SM_ENEMY)
        return 40;
    else if (scn.objs[i]->type == MD_ENEMY)
        return 60;
    else
        return 80;
}

sfInt32 get_clock_limiter_pos(scenes_t scn, int i)
{
    if (scn.objs[i]->type == SM_ENEMY)
        return 10;
    else if (scn.objs[i]->type == MD_ENEMY)
        return 20;
    else
        return 30;
}
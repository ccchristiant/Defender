/*
** EPITECH PROJECT, 2021
** check_breach.c
** File description:
** check_breach function
*/

#include "struct.h"

void check_breach(global_t *core, scenes_t scn, int idx, int offsets[3])
{
    if (scn.objs[idx]->pos.y == 984 + offsets[2] &&
        scn.objs[idx]->pos.x == 485 + offsets[0] + offsets[1]) {
        core->life -= 1;
        sfSound_play(core->sounds[3].sound);
    }
    if (scn.objs[idx]->pos.y == 985 + offsets[2] &&
        scn.objs[idx]->pos.x == 485 + offsets[0] + offsets[1]) {
        scn.objs[idx]->move = 0;
        --core->m_alive;
    }
}
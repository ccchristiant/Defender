/*
** EPITECH PROJECT, 2021
** move_monster.c
** File description:
** move_monster function
*/

#include "proto.h"

void move_monster(global_t *core, scenes_t scn, int idx)
{
    int offsets[3];

    offsets[0] = (scn.objs[idx]->type == MD_ENEMY) ? -25 : 0;
    offsets[1] = (scn.objs[idx]->type == LG_ENEMY) ? -45 : 0;
    offsets[2] = (scn.objs[idx]->type == LG_ENEMY) ? 5 : 0;
    horizontal_1(scn, idx, offsets);
    turn_1(core, scn, idx, offsets);
    vertical_1(scn, idx, offsets);
    turn_2(core, scn, idx, offsets);
    horizontal_2(scn, idx, offsets);
    turn_3(core, scn, idx, offsets);
    vertical_2(scn, idx, offsets);
    turn_4(core, scn, idx, offsets);
    vertical_3(scn, idx, offsets);
    turn_5(core, scn, idx, offsets);
    horizontal_3(scn, idx, offsets);
    turn_6(core, scn, idx, offsets);
    vertical_4(scn, idx, offsets);
    turn_7(core, scn, idx, offsets);
    horizontal_4(scn, idx, offsets);
    turn_8(core, scn, idx, offsets);
    horizontal_5(scn, idx, offsets);
    turn_9(core, scn, idx, offsets);
    vertical_5(scn, idx, offsets);
    sfSprite_setPosition(scn.objs[idx]->spt, scn.objs[idx]->pos);
    if (scn.objs[idx]->pos.x == 1900 + offsets[0] + offsets[1] &&
        scn.objs[idx]->pos.y == 695 + offsets[2])
        scn.objs[idx]->covered_dist = 0;
    scn.objs[idx]->covered_dist += (scn.objs[idx]->states[SLOWED] == 0) ? 2 : 1;
    check_breach(core, scn, idx, offsets);
}
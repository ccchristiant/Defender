/*
** EPITECH PROJECT, 2021
** can_move.c
** File description:
** can_move function
*/

#include "proto.h"

void can_move(global_t *core, scenes_t scn, int i)
{
    int sft = 0;
    int max = 0;

    sft = get_shift(scn, i);
    max = get_max(scn, i);
    if (scn.objs[i]->move == 1 && scn.objs[i]->health > 0 &&
        scn.objs[i]->states[FROZEN] == 0) {
        if (scn.objs[i]->m_anim_seconds > scn.objs[i]->clock_limiter_anim) {
            sfSprite_setTextureRect(scn.objs[i]->spt, scn.objs[i]->rect);
            move_rect(&scn.objs[i]->rect, sft, max, scn.objs[i]->left_init);
            sfClock_restart(scn.objs[i]->m_anim_clock);
        }
        if (scn.objs[i]->m_pos_seconds > scn.objs[i]->clock_limiter_pos) {
            move_monster(core, scn, i);
            sfClock_restart(scn.objs[i]->m_pos_clock);
        }
    }
}
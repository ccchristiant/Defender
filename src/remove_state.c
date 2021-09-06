/*
** EPITECH PROJECT, 2021
** remove_state.c
** File description:
** remove_state function
*/

#include "proto.h"

void remove_sp_dmged(scenes_t scn, int i)
{
    if (scn.objs[i]->m_simple_damage_seconds > 0.5) {
        scn.objs[i]->states[SP_DMG] = 0;
        sfSprite_setColor(scn.objs[i]->spt, scn.objs[i]->idle);
        sfClock_restart(scn.objs[i]->m_simple_damage_clock);
    }
}

void remove_slowed(scenes_t scn, int i)
{
    if (scn.objs[i]->m_slow_seconds > 1.0) {
        scn.objs[i]->states[SLOWED] = 0;
        scn.objs[i]->clock_limiter_anim = get_clock_limiter_anim(scn, i);
        scn.objs[i]->clock_limiter_pos = get_clock_limiter_pos(scn, i);
        sfSprite_setColor(scn.objs[i]->spt, scn.objs[i]->idle);
        sfClock_restart(scn.objs[i]->m_slow_clock);
    }
}

void remove_frozen(scenes_t scn, int i)
{
    if (scn.objs[i]->m_freeze_seconds > 1.0) {
        scn.objs[i]->states[FROZEN] = 0;
        sfSprite_setColor(scn.objs[i]->spt, scn.objs[i]->idle);
        sfClock_restart(scn.objs[i]->m_freeze_clock);
    }
}

void remove_db_dmged(scenes_t scn, int i)
{
    if (scn.objs[i]->m_double_damage_seconds > 0.5) {
        scn.objs[i]->states[DB_DMG] = 0;
        sfSprite_setColor(scn.objs[i]->spt, scn.objs[i]->idle);
        sfClock_restart(scn.objs[i]->m_double_damage_clock);
    }
}
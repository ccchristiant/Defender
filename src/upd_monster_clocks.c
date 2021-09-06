/*
** EPITECH PROJECT, 2021
** upd_monster_clocks.c
** File description:
** upd_monster_clocks function
*/

#include "struct.h"

void upd_sp_dmg_clock(scenes_t scn, int i)
{
    if (scn.objs[i]->states[SP_DMG] == 1) {
        scn.objs[i]->m_simple_damage_time = sfClock_getElapsedTime(scn.objs[i]->m_simple_damage_clock);
        scn.objs[i]->m_simple_damage_seconds = sfTime_asSeconds(scn.objs[i]->m_simple_damage_time);
    }
    else
        sfClock_restart(scn.objs[i]->m_simple_damage_clock);
}

void upd_slow_clock(scenes_t scn, int i)
{
    if (scn.objs[i]->states[SLOWED] == 1) {
        scn.objs[i]->m_slow_time = sfClock_getElapsedTime(scn.objs[i]->m_slow_clock);
        scn.objs[i]->m_slow_seconds = sfTime_asSeconds(scn.objs[i]->m_slow_time);
    }
    else
        sfClock_restart(scn.objs[i]->m_slow_clock);
}

void upd_freeze_clock(scenes_t scn, int i)
{
    if (scn.objs[i]->states[FROZEN] == 1) {
        scn.objs[i]->m_freeze_time = sfClock_getElapsedTime(scn.objs[i]->m_freeze_clock);
        scn.objs[i]->m_freeze_seconds = sfTime_asSeconds(scn.objs[i]->m_freeze_time);
    }
    else
        sfClock_restart(scn.objs[i]->m_freeze_clock);
}

void upd_db_dmg_clock(scenes_t scn, int i)
{
    if (scn.objs[i]->states[DB_DMG] == 1) {
        scn.objs[i]->m_double_damage_time = sfClock_getElapsedTime(scn.objs[i]->m_double_damage_clock);
        scn.objs[i]->m_double_damage_seconds = sfTime_asSeconds(scn.objs[i]->m_double_damage_time);
    }
    else
        sfClock_restart(scn.objs[i]->m_double_damage_clock);
}

void upd_monster_clocks(scenes_t scn)
{
    for (int i = 19; i < 69; ++i) {
        scn.objs[i]->m_anim_time = sfClock_getElapsedTime(scn.objs[i]->m_anim_clock);
        scn.objs[i]->m_anim_seconds = sfTime_asMilliseconds(scn.objs[i]->m_anim_time);
        scn.objs[i]->m_pos_time = sfClock_getElapsedTime(scn.objs[i]->m_pos_clock);
        scn.objs[i]->m_pos_seconds = sfTime_asMilliseconds(scn.objs[i]->m_pos_time);
        upd_sp_dmg_clock(scn, i);
        upd_slow_clock(scn, i);
        upd_freeze_clock(scn, i);
        upd_db_dmg_clock(scn, i);
    }
}
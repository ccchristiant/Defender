/*
** EPITECH PROJECT, 2021
** i_monsters_data.c
** File description:
** i_monsters_data function
*/

#include "my.h"
#include "struct.h"

void i_health_and_clock_limiter(scenes_t *scn, int i)
{
    if (scn->objs[i]->type == SM_ENEMY) {
        scn->objs[i]->health = 5;
        scn->objs[i]->clock_limiter_anim = 40;
        scn->objs[i]->clock_limiter_pos = 5;
    }
    if (scn->objs[i]->type == MD_ENEMY) {
        scn->objs[i]->health = 10;
        scn->objs[i]->clock_limiter_anim = 60;
        scn->objs[i]->clock_limiter_pos = 10;
    }
    if (scn->objs[i]->type == LG_ENEMY) {
        scn->objs[i]->health = 15;
        scn->objs[i]->clock_limiter_anim = 80;
        scn->objs[i]->clock_limiter_pos = 15;
    }
}

void i_monster_state_colors(scenes_t *scn, int i)
{
    scn->objs[i]->idle = sfColor_fromRGB(255, 255, 255);
    scn->objs[i]->simple_damaged = sfColor_fromRGB(178, 34, 34);
    scn->objs[i]->slowed = sfColor_fromRGB(50, 205, 50);
    scn->objs[i]->frozen = sfColor_fromRGB(0, 128, 128);
    scn->objs[i]->double_damaged = sfColor_fromRGB(139, 0, 0);
}

void i_m_clocks(scenes_t *scn, int i)
{
    scn->objs[i]->m_anim_clock = sfClock_create();
    scn->objs[i]->m_anim_seconds = 0;
    scn->objs[i]->m_pos_clock = sfClock_create();
    scn->objs[i]->m_pos_seconds = 0;
    scn->objs[i]->m_simple_damage_clock = sfClock_create();
    scn->objs[i]->m_simple_damage_seconds = 0;
    scn->objs[i]->m_slow_clock = sfClock_create();
    scn->objs[i]->m_slow_seconds = 0;
    scn->objs[i]->m_freeze_clock = sfClock_create();
    scn->objs[i]->m_freeze_seconds = 0;
    scn->objs[i]->m_double_damage_clock = sfClock_create();
    scn->objs[i]->m_double_damage_seconds = 0;
}

void i_monsters_data(scenes_t *scn)
{
    for (int i = 19; i < 69; ++i) {
        scn->objs[i]->move = 0;
        i_health_and_clock_limiter(scn, i);
        scn->objs[i]->covered_dist = 0;
        my_memset(scn->objs[i]->states, 0, 4 * 4);
        i_monster_state_colors(scn, i);
        i_m_clocks(scn, i);
    }
}
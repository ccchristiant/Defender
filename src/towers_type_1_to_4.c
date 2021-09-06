/*
** EPITECH PROJECT, 2021
** towers_type_1_to_4.c
** File description:
** towers_type_1_to_4 function
*/

#include "proto.h"

void tower_simple_damage(global_t *core, scenes_t scn, int i)
{
    int i_max = closest_to_exit_in_range(core, scn, i, SP_DMG);
    int damage = 1.0 * (1.0 + 1.0 * core->up_tower[i]);
    sfVector2f point = {scn.objs[i_max]->pos.x + 100, scn.objs[i_max]->pos.y};

    if (inside_range(scn.objs[10 + i]->pos, point, 210.0) &&
        scn.objs[i_max]->health > 0 &&
        scn.objs[i_max]->states[SP_DMG] == 0 &&
        core->tower_clocks[i].seconds > 1.2) {
        scn.objs[i_max]->states[SP_DMG] = 1;
        scn.objs[i_max]->health -= damage;
        if (scn.objs[i_max]->health <= 0) {
            scn.objs[i_max]->move = 0;
            --core->m_alive;
            bounty(core, scn, i_max);
        }
        sfSprite_setColor(scn.objs[i_max]->spt, scn.objs[i_max]->simple_damaged);
        sfClock_restart(core->tower_clocks[i].clock);
    }
}

void tower_slow(global_t *core, scenes_t scn, int i)
{
    int i_max = closest_to_exit_in_range(core, scn, i, SLOWED);
    sfInt32 slow_a = scn.objs[i_max]->clock_limiter_anim * (1.0 + 1.0 * (core->up_tower[i] + 1));
    sfInt32 slow_p = scn.objs[i_max]->clock_limiter_pos * (1.0 + 1.0 * (core->up_tower[i] + 1));
    sfVector2f point = {scn.objs[i_max]->pos.x + 100, scn.objs[i_max]->pos.y};

    if (inside_range(scn.objs[10 + i]->pos, point, 210.0) &&
        scn.objs[i_max]->health > 0 && scn.objs[i_max]->states[SLOWED] == 0 &&
        core->tower_clocks[i].seconds > 2.0) {
        scn.objs[i_max]->states[SLOWED] = 1;
        scn.objs[i_max]->clock_limiter_anim = slow_a;
        scn.objs[i_max]->clock_limiter_pos = slow_p;
        sfSprite_setColor(scn.objs[i_max]->spt, scn.objs[i_max]->slowed);
        sfClock_restart(core->tower_clocks[i].clock);
    }
}

void tower_freeze(global_t *core, scenes_t scn, int i)
{
    int i_max = closest_to_exit_in_range(core, scn, i, FROZEN);
    float freeze_cooldown = 3.0 * (1.0 - 0.15 * (core->up_tower[i] + 1));
    sfVector2f point = {scn.objs[i_max]->pos.x + 100, scn.objs[i_max]->pos.y};

    if (inside_range(scn.objs[10 + i]->pos, point, 210.0) &&
        scn.objs[i_max]->health > 0 &&
        scn.objs[i_max]->states[FROZEN] == 0 &&
        core->tower_clocks[i].seconds > freeze_cooldown) {
        scn.objs[i_max]->states[FROZEN] = 1;
        sfSprite_setColor(scn.objs[i_max]->spt, scn.objs[i_max]->frozen);
        sfClock_restart(core->tower_clocks[i].clock);
    }
}

void tower_money(global_t *core, __attribute__ ((unused))scenes_t scn, int i)
{
    if (core->tower_clocks[i].seconds > 10) {
        core->money += 10 + 5 * core->up_tower[i];
        sfClock_restart(core->tower_clocks[i].clock);
    }
    return;
}
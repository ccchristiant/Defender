/*
** EPITECH PROJECT, 2021
** tower_type_5.c
** File description:
** tower_type_5 functions
*/

#include "proto.h"

void tower_double_damage_2(global_t *core, scenes_t scn, int i)
{
    int damage = 1.0 * (1.0 + 1.0 * core->up_tower[i]);
    int i_max = closest_to_exit_in_range(core, scn, i, DB_DMG);
    sfVector2f point = {scn.objs[i_max]->pos.x + 100, scn.objs[i_max]->pos.y};

    if (inside_range(scn.objs[10 + i]->pos, point, 210.0) &&
        scn.objs[i_max]->health > 0 &&
        scn.objs[i_max]->states[DB_DMG] == 0 &&
        core->tower_clocks[i].seconds > 1.7) {
        scn.objs[i_max]->states[DB_DMG] = 1;
        scn.objs[i_max]->health -= damage;
        if (scn.objs[i_max]->health <= 0) {
            scn.objs[i_max]->move = 0;
            --core->m_alive;
            bounty(core, scn, i_max);
        }
        sfSprite_setColor(scn.objs[i_max]->spt, scn.objs[i_max]->double_damaged);
        sfClock_restart(core->tower_clocks[i].clock);
    }
}

void tower_double_damage_1(global_t *core, scenes_t scn, int i)
{
    int damage = 1.0 * (1.0 + 1.0 * core->up_tower[i]);
    int i_max = closest_to_exit_in_range(core, scn, i, DB_DMG);
    sfVector2f point = {scn.objs[i_max]->pos.x + 100, scn.objs[i_max]->pos.y};

    if (inside_range(scn.objs[10 + i]->pos, point, 210.0) &&
        scn.objs[i_max]->health > 0 &&
        scn.objs[i_max]->states[DB_DMG] == 0 &&
        core->tower_clocks[i].seconds > 1.7) {
        scn.objs[i_max]->states[DB_DMG] = 1;
        scn.objs[i_max]->health -= damage;
        if (scn.objs[i_max]->health <= 0) {
            scn.objs[i_max]->move = 0;
            --core->m_alive;
            bounty(core, scn, i_max);
        }
        sfSprite_setColor(scn.objs[i_max]->spt, scn.objs[i_max]->double_damaged);
        sfClock_restart(core->tower_clocks[i].clock);
    }
    tower_double_damage_2(core, scn, i);
}
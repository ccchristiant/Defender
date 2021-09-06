/*
** EPITECH PROJECT, 2021
** closest_to_exit_in_range.c
** File description:
** closest_to_exit_in_range function
*/

#include "proto.h"

int closest_to_exit_in_range(global_t *core, scenes_t scn, int i, state_type state)
{
    int i_max = 0;
    int max = 0;
    sfVector2f point;

    for (int j = 0; j < 50 && core->m_moved_tab[j] != -1; ++j) {
        point.x = scn.objs[core->m_moved_tab[j]]->pos.x + 100;
        point.y = scn.objs[core->m_moved_tab[j]]->pos.y;
        if (inside_range(scn.objs[10 + i]->pos, point, 210.0) &&
            scn.objs[core->m_moved_tab[j]]->health > 0 &&
            scn.objs[core->m_moved_tab[j]]->covered_dist > max &&
            scn.objs[core->m_moved_tab[j]]->states[state] == 0) {
            i_max = core->m_moved_tab[j];
            max = scn.objs[core->m_moved_tab[j]]->covered_dist;
        }
    }
    return i_max;
}
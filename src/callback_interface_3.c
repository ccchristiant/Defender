/*
** EPITECH PROJECT, 2021
** callback_jnterface_3.c
** File description:
** callback_jnterface_3 functions
*/

#include "my.h"
#include "proto.h"
#include "game.h"

__attribute__ ((unused))static const char *GM_B_F[9];

void nothing(__attribute__ ((unused))global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    return;
}

void pause(global_t *core, __attribute__ ((unused))scenes_t *scns)
{
    core->cur_scn = PAUSE;
}

void reset_objs(scenes_t *scns)
{
    for (int j = 0; j < scns[GAME].nb_obj; ++j) {
        sfSprite_destroy(scns[GAME].objs[j]->spt);
        sfTexture_destroy(scns[GAME].objs[j]->txt);
        free(scns[GAME].objs[j]);
    }
    for (int i = 0; i < scns[GAME].nb_obj; ++i)
        scns[GAME].objs[i] = obj(GM_O_F[i], GM_O_T[i], GM_O_P[i], GM_O_R[i]);
    i_pos_obj(&scns[GAME]);
    i_scale_obj(&scns[GAME]);
    i_monsters_data(&scns[GAME]);
    i_towers_data(&scns[GAME]);
}

void restart(global_t *core, scenes_t *scns)
{
    reset_objs(scns);
    if (!randomize())
        return;
    for (int h = 0; h < 9; ++h)
        sfClock_restart(core->tower_clocks[h].clock);
    sfClock_restart(core->frequency_clock);
    sfClock_restart(core->score_clock);
    sfClock_restart(core->money_clock);
    sfClock_restart(core->global_clock);
    core->idx_max = 25;
    core->ck_tow = 0;
    my_memset(core->up_tower, 0, 4 * 9);
    my_memset(core->occ_spots, 0, 4 * 9);
    my_memset(core->m_moved_tab, -1, 4 * 50);
    core->score = 0;
    core->money = 20;
    core->m_moved = 0;
    core->m_alive = 50;
    core->life = 5;
    play(core, scns);
}

void complex_menu(global_t *core, scenes_t *scns)
{
    restart(core, scns);
    simple_menu(core, scns);
}
/*
** EPITECH PROJECT, 2021
** update.c
** File description:
** update function
*/

#include "proto.h"

void update(global_t *core, scenes_t *scns)
{
    sfRenderWindow_clear(core->wn, sfBlack);
    objs_pos(core, scns[core->cur_scn]);
    draw_scene(core, scns[core->cur_scn]);
    display_cursor(core);
    sfRenderWindow_display(core->wn);
}
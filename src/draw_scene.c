/*
** EPITECH PROJECT, 2021
** draw_scene.c
** File description:
** draw scene function
*/

#include "proto.h"
#include <stdio.h>

void draw_objs(global_t *core, scenes_t scn)
{
    for (int i = 0; i < scn.nb_obj; ++i) {
        if (core->cur_scn == GAME && (i == 10 || i == 205)) {
            draw_in_game(core, scn, &i);
            if (i >= 215)
                break;
        }
        sfRenderWindow_drawSprite(core->wn, scn.objs[i]->spt, NULL);
    }
}

void draw_buttons(global_t *core, scenes_t scn)
{
    for (int j = 0; j < scn.nb_button; ++j) {
        if (core->cur_scn == MENU || core->cur_scn == OVER ||
            core->cur_scn == END) {
                draw_music_sound_1(core, scn, &j);
            if (j >= scn.nb_button)
                break;
        }
        if (core->cur_scn == SETTINGS || core->cur_scn == PAUSE)
            draw_music_sound_2(core, scn, &j);
        if (core->cur_scn == GAME && j == 6) {
            for (; j < 8; j++)
                draw_upgrade_sell(core, scn, &j);
            if (j >= scn.nb_button)
                break;
        }
        sfRenderWindow_drawSprite(core->wn, scn.btts[j].spt, NULL);
    }
}

void draw_scene(global_t *core, scenes_t scn)
{
    draw_objs(core, scn);
    draw_buttons(core, scn);
    if (core->cur_scn == END || core->cur_scn == OVER)
        sfRenderWindow_drawText(core->wn, core->text_score, NULL);
}
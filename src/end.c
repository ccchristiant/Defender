/*
** EPITECH PROJECT, 2021
** end.c
** File description:
** end functions
*/

#include "struct.h"
#include "my_macros.h"
#include <stdlib.h>

void end_core(global_t *core)
{
    sfRenderWindow_destroy(core->wn);
    sfSprite_destroy(core->cursor_s);
    sfTexture_destroy(core->cursor_t);
    for (int i = 0; i < 9; ++i)
        sfCircleShape_destroy(core->circles[i]);
    sfClock_destroy(core->global_clock);
    sfClock_destroy(core->money_clock);
    sfClock_destroy(core->score_clock);
    sfClock_destroy(core->frequency_clock);
    sfFont_destroy(core->font);
    sfText_destroy(core->text_money);
    sfText_destroy(core->text_score);
    for (int i = 0; i < 4; ++i) {
        sfMusic_destroy(core->musics[i].music);
        sfSound_destroy(core->sounds[i].sound);
        sfSoundBuffer_destroy(core->sounds[i].buffer);
    }
}

void end_scenes(scenes_t *scns)
{
    for (int i = 0; i < NB_SCENES; ++i) {
        for (int j = 0; j < scns[i].nb_obj; ++j) {
            sfSprite_destroy(scns[i].objs[j]->spt);
            sfTexture_destroy(scns[i].objs[j]->txt);
            if (scns[i].objs[j]->type == SM_ENEMY ||
                scns[i].objs[j]->type == MD_ENEMY ||
                scns[i].objs[j]->type == LG_ENEMY) {
                sfClock_destroy(scns[i].objs[j]->m_anim_clock);
                sfClock_destroy(scns[i].objs[j]->m_pos_clock);
                sfClock_destroy(scns[i].objs[j]->m_simple_damage_clock);
                sfClock_destroy(scns[i].objs[j]->m_slow_clock);
                sfClock_destroy(scns[i].objs[j]->m_freeze_clock);
                sfClock_destroy(scns[i].objs[j]->m_double_damage_clock);
            }
            free(scns[i].objs[j]);
        }
        free(scns[i].objs);
        for (int k = 0; k < scns[i].nb_button; ++k) {
            sfSprite_destroy(scns[i].btts[k].spt);
            sfTexture_destroy(scns[i].btts[k].txt);
        }
        free(scns[i].btts);
    }
    free(scns);
    return;
}
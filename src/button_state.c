/*
** EPITECH PROJECT, 2021
** button_state.c
** File description:
** button_state function
*/

#include "struct.h"

void button_state(global_t *core, scenes_t *scns)
{
    sfFloatRect rect;
    int j = core->cur_scn;

    for (int i = 0; i < scns[j].nb_button; ++i) {
        rect = sfSprite_getGlobalBounds(scns[j].btts[i].spt);
        if (sfFloatRect_contains(&rect, core->c_move.x, core->c_move.y))
            sfSprite_setColor(scns[j].btts[i].spt, scns[j].btts[i].hover);
        else
            sfSprite_setColor(scns[j].btts[i].spt, scns[j].btts[i].idle);
        if (sfFloatRect_contains(&rect, core->c_button.x, core->c_button.y)) {
            if (core->evt.type == sfEvtMouseButtonPressed) {
                sfSound_play(core->sounds[0].sound);
                sfSprite_setColor(scns[j].btts[i].spt, scns[j].btts[i].press);
            }
            if (core->evt.type == sfEvtMouseButtonReleased)
                scns[j].btts[i].function(core, scns);
        }
    }
}
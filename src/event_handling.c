/*
** EPITECH PROJECT, 2021
** evt_handling.c
** File description:
** evt_handling function
*/

#include "proto.h"

void close_or_pause(global_t *core)
{
    if (core->evt.type == sfEvtClosed)
        sfRenderWindow_close(core->wn);
    if (core->evt.type == sfEvtKeyPressed &&
        core->evt.key.code == sfKeyEscape) {
        if (core->cur_scn == MENU)
            sfRenderWindow_close(core->wn);
        if (core->cur_scn == GAME)
            core->cur_scn = PAUSE;
    }
}

void mouse_positions(global_t *core)
{
    if (core->evt.type == sfEvtMouseMoved) {
        core->c_move.x = core->evt.mouseMove.x;
        core->c_move.y = core->evt.mouseMove.y;
    }
    if (core->evt.type == sfEvtMouseButtonPressed ||
        core->evt.type == sfEvtMouseButtonReleased) {
        core->c_button.x = core->evt.mouseButton.x;
        core->c_button.y = core->evt.mouseButton.y;
        if (core->evt.mouseButton.button == sfMouseRight) {
            core->pk_tow = 0;
            core->ck_tow = 0;
        }
    }
}

void event_handling(global_t *core, scenes_t *scns)
{
    while (sfRenderWindow_pollEvent(core->wn, &core->evt)) {
        close_or_pause(core);
        mouse_positions(core);
        button_state(core, scns);
    }
}
/*
** EPITECH PROJECT, 2021
** objs_pos.c
** File description:
** objs_pos function
*/

#include "proto.h"
#include <stdio.h>

void objs_pos(global_t *core, scenes_t scn)
{
    if (core->cur_scn == GAME) {
        hold_tower(core, scn);
        set_tower(core, scn);
        nb_tower_occupied(core);
        set_tower_1(core, scn);
        upd_clock(core, scn);
        choose_monster_to_move(core, scn);
        all_monster_movements(core, scn);
        towers_action(core, scn);
        money_from_time(core);
        score_from_kills(core);
        check_end_of_party(core, scn);
    }
    if (core->cur_scn == END || core->cur_scn == OVER) {
        sfText_setCharacterSize(core->text_score, 80);
        sfText_setPosition(core->text_score, (sfVector2f){900, 600});
    }
}
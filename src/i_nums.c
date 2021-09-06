/*
** EPITECH PROJECT, 2021
** i_nums.c
** File description:
** i_nums function
*/

#include "struct.h"
#include "my_macros.h"

void i_nums(global_t *core)
{
    core->c_move.x = WIDTH / 2;
    core->c_move.y = HEIGHT / 2;
    core->c_button.x = WIDTH / 2;
    core->c_button.y = HEIGHT / 2;
    core->music_state = 1;
    core->sound_state = 1;
    core->cur_scn = MENU;
    core->life = 5;
    core->m_alive = 50;
    core->m_moved = 0;
    core->id_m_tab = 0;
    core->money = 20;
    core->score = 0;
    core->pk_tow = 0;
    core->ck_tow = 0;
    core->idx_max = 25;
}
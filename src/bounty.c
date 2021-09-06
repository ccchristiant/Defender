/*
** EPITECH PROJECT, 2021
** bounty.c
** File description:
** bounty function
*/

#include "struct.h"

void bounty(global_t *core, scenes_t scn, int i_max)
{
    int money_bounty = 0;
    int score_bounty = 0;

    if (scn.objs[i_max]->type == SM_ENEMY) {
        money_bounty = 5;
        score_bounty = 100;
    }
    else if (scn.objs[i_max]->type == MD_ENEMY) {
        money_bounty = 10;
        score_bounty = 500;
    }
    else {
        money_bounty = 20;
        score_bounty = 1000;
    }
    if (core->m_alive % 10 == 0)
        sfSound_play(core->sounds[1].sound);
    else
        sfSound_play(core->sounds[2].sound);
    core->money += money_bounty;
    core->score += score_bounty;
}
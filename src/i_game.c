/*
** EPITECH PROJECT, 2021
** i_game.c
** File description:
** i_game function
*/

#include <stdlib.h>
#include "game.h"

int i_game(scenes_t *scn)
{
    scn->nb_obj = 220;
    scn->nb_button = 8;
    scn->objs = malloc(sizeof(game_obj*) * scn->nb_obj);
    scn->btts = malloc(sizeof(button_t) * scn->nb_button);
    if (!scn->objs || !scn->btts)
        return 0;
    for (int i = 0; i < scn->nb_obj; ++i)
        scn->objs[i] = obj(GM_O_F[i], GM_O_T[i], GM_O_P[i], GM_O_R[i]);
    i_pos_obj(scn);
    i_scale_obj(scn);
    i_monsters_data(scn);
    i_towers_data(scn);
    for (int j = 0; j < scn->nb_button; ++j) {
        i_button(&scn->btts[j], GM_B_F[j], GM_B_P[j], GM_B_S[j], GM_B_C[j]);
        i_button_color(&scn->btts[j]);
    }
    return 1;
}
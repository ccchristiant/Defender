/*
** EPITECH PROJECT, 2021
** i_menu.c
** File description:
** i_menu function
*/

#include <stdlib.h>
#include "menu.h"

int i_menu(scenes_t *scn)
{
    scn->nb_obj = 1;
    scn->nb_button = 8;
    scn->objs = malloc(sizeof(game_obj*) * scn->nb_obj);
    scn->btts = malloc(sizeof(button_t) * scn->nb_button);
    if (!scn->objs || !scn->btts)
        return 0;
    for (int i = 0; i < scn->nb_obj; ++i)
        scn->objs[i] = obj(MN_O_F[i], MN_O_T[i], MN_O_P[i], MN_O_R[i]);
    i_scale_obj(scn);
    for (int j = 0; j < scn->nb_button; ++j) {
        i_button(&scn->btts[j], MN_B_F[j], MN_B_P[j], MN_B_S[j], MN_B_C[j]);
        i_button_color(&scn->btts[j]);
    }
    return 1;
}
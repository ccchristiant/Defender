/*
** EPITECH PROJECT, 2021
** bs_defender.c
** File description:
** ctran
*/

#include <stdlib.h>
#include "proto.h"
#include "my_macros.h"

int defender(void)
{
    global_t core;
    scenes_t *scns = malloc(sizeof(scenes_t) * NB_SCENES);

    if (!scns || !i_core(&core) || !i_scenes(scns))
        return 0;
    while (sfRenderWindow_isOpen(core.wn)) {
        event_handling(&core, scns);
        update(&core, scns);
    }
    end_core(&core);
    end_scenes(scns);
    return 1;
}
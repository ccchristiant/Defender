/*
** EPITECH PROJECT, 2021
** check_end_of_party.c
** File description:
** check_end_of_party function
*/

#include "proto.h"

void check_end_of_party(global_t *core, scenes_t scn)
{
    if (core->m_alive == 0)
        end(core, &scn);
    if (core->life <= 0)
        over(core, &scn);
}
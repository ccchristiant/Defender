/*
** EPITECH PROJECT, 2021
** i_towers_data.c
** File description:
** i_towers_data function
*/

#include "struct.h"

void i_towers_data(scenes_t *scn)
{
    for (int i = 69, count = 1; i < 204; ++i, ++count) {
        switch (count)
        {
            case 3:
                scn->objs[i]->freeze_cooldown = 3.0;
                break;
            case 4:
                scn->objs[i]->money_cooldown = 10.0;
                break;
        }
        if (count == 5)
            count = 1;
    }
}
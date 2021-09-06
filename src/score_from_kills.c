/*
** EPITECH PROJECT, 2021
** score_from_kills.c
** File description:
** score_from_kills function
*/

#include "my.h"
#include "struct.h"

void score_from_kills(global_t *core)
{
    sfText_setCharacterSize(core->text_score, 57);
    sfText_setPosition(core->text_score, (sfVector2f){800, 980});
    sfText_setString(core->text_score, my_itoa(core->score));
}
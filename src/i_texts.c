/*
** EPITECH PROJECT, 2021
** i_texts.c
** File description:
** i_texts function
*/

#include "struct.h"

void i_texts(global_t *core)
{
    core->font = sfFont_createFromFile("res/Dimbo Regular.ttf");
    core->text_money = sfText_create();
    core->text_score = sfText_create();
    sfText_setFont(core->text_money, core->font);
    sfText_setFont(core->text_score, core->font);
    sfText_setCharacterSize(core->text_money, 57);
    sfText_setCharacterSize(core->text_score, 57);
    sfText_setPosition(core->text_money, (sfVector2f){800, 910});
    sfText_setPosition(core->text_score, (sfVector2f){800, 980});
}
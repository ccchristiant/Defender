/*
** EPITECH PROJECT, 2021
** i_scenes.c
** File description:
** i_scenes function
*/

#include "struct.h"

int i_button(button_t *button, char const *path, sfVector2f pos, sfVector2f scale, void(*callback)())
{
    button->spt = sfSprite_create();
    button->txt = sfTexture_createFromFile(path, NULL);
    if (!button->txt)
        return 0;
    sfTexture_setSmooth(button->txt, sfTrue);
    sfSprite_setTexture(button->spt, button->txt, sfTrue);
    sfSprite_setPosition(button->spt, pos);
    sfSprite_scale(button->spt, scale);
    button->function = &(*callback);
    return 1;
}

void i_button_color(button_t *button)
{
    button->idle = sfColor_fromRGB(255, 255, 255);
    button->hover = sfColor_fromRGB(192, 192, 192);
    button->press = sfColor_fromRGB(105, 105, 105);
}
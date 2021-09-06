/*
** EPITECH PROJECT, 2021
** move_rect.c
** File description:
** move_rect function
*/

#include <SFML/Graphics.h>

void move_rect(sfIntRect *rect, int offset, int max_value, float left_init)
{
    rect->left += offset;
    if (rect->left >= max_value)
        rect->left = left_init;
}
/*
** EPITECH PROJECT, 2021
** money_from_time.c
** File description:
** money_from_time function
*/

#include "my.h"
#include "struct.h"

void money_from_time(global_t *core)
{
    if (core->money_seconds > 2) {
        core->money += 1;
        sfClock_restart(core->money_clock);
    }
    sfText_setString(core->text_money, my_itoa(core->money));
}
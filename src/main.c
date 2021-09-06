/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main function
*/

#include "proto.h"

int main(int ac, __attribute__ ((unused))char **av, char **env)
{
    if (!*env || ac != 1)
        return (84);
    if (!defender())
        return 84;
    return 0;
}
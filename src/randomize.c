/*
** EPITECH PROJECT, 2021
** randomize.c
** File description:
** randomize function
*/

#include <stdlib.h>
#include <stdio.h>

int choose_seed(FILE *in)
{
    unsigned int  seed;

    if (!in)
        return 0;
    if (fread(&seed, sizeof seed, 1, in) == 1) {
        fclose(in);
        srand(seed);
        return 1;
    }
    fclose(in);
    return 0;
}

int randomize(void)
{
    if (!choose_seed(fopen("/dev/urandom", "r")) ||
        !choose_seed(fopen("/dev/arandom", "r")) ||
        !choose_seed(fopen("/dev/random", "r")))
        return 1;
    return 0;
}
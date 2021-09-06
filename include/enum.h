/*
** EPITECH PROJECT, 2021
** enum.h
** File description:
** enum header
*/

#ifndef ENUM_H_
#define ENUM_H_

typedef enum scene_type {
    MENU = 0,
    SETTINGS,
    HELP,
    HELPP,
    GAME,
    PAUSE,
    END,
    OVER
} scene_type;

typedef enum object_type {
    BACKGROUND = 0,
    LIFEBAR,
    MONSTBAR,
    SPOT,
    RANGE,
    SM_ENEMY,
    MD_ENEMY,
    LG_ENEMY,
    O_TOWER,
    C_TOWER,
} object_type;

typedef enum state_type {
    SP_DMG = 0,
    SLOWED,
    FROZEN,
    DB_DMG,
} state_type;

#endif
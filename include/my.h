/*
** EPITECH PROJECT, 2022
** structure
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

typedef struct warrior_t
{
    char *name;
    int pv;
    int pv_max;
    int armor;
    int damage;
    int dodge;
    int lvl;

} warrior_t;

// warrior.c
warrior_t *new_warrior(char *name);
void free_warrior(warrior_t *warrior);
bool has_dodged(warrior_t *warrior);
warrior_t *attack(warrior_t *warrior_a, warrior_t *warrior_b);
warrior_t *level_up(warrior_t *warrior);

// enemy.c
bool fight(warrior_t *warrior, warrior_t *enemy);
void arena(warrior_t *warrior);

// my_str.c
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);

#endif /* !MY_H_ */

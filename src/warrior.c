/*
** EPITECH PROJECT, 2022
** structure
** File description:
** warrior
*/

#include "my.h"

warrior_t *new_warrior(char *name)
{
    warrior_t *new_war = malloc(sizeof(warrior_t));

    if (new_war == NULL)
        return (NULL);

    new_war->name   = my_strdup(name);
    new_war->pv     = 15;
    new_war->pv_max = 15;
    new_war->armor  = 3;
    new_war->damage = 6;
    new_war->dodge  = 30;
    new_war->lvl    = 1;

    return (new_war);
}

void free_warrior(warrior_t *warrior)
{
    free(warrior->name);
    free(warrior);
}

bool has_dodged(warrior_t *warrior)
{
    srand(time(NULL));
    int n = rand() % 100 + 1;
    
    if (n < warrior->dodge)
        return (true);
    return (false);
}

warrior_t *attack(warrior_t *warrior_a, warrior_t *warrior_b)
{
    int damage = warrior_a->damage - warrior_b->armor;

    if (has_dodged(warrior_b))
        return (warrior_b);
    
    warrior_b->pv = warrior_b->pv - damage;

    return (warrior_b);
}

warrior_t *level_up(warrior_t *warrior)
{
    warrior->pv_max = warrior->pv_max + 5;
    warrior->armor  = warrior->armor + 2;
    warrior->damage = warrior->damage + 5;
    warrior->dodge  = warrior->dodge + 5;
    warrior->lvl    = warrior->lvl + 1;

    warrior->pv     = warrior->pv_max;

    return (warrior);
}
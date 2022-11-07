/*
** EPITECH PROJECT, 2022
** structure
** File description:
** warior
*/

#include "my.h"

war new_warior(char *name)
{
    war new_war = malloc(sizeof(war));

    if (new_war == NULL)
        return (NULL);

    new_war->name   = strdup(name);
    new_war->pv     = 15;
    new_war->armor  = 3;
    new_war->damage = 6;
    new_war->dodge  = 30;

    return (new_war);
}

void free_warior(war w)
{
    free(w->name);
    free(w);
}

war attack(war a, war b)
{
    
}
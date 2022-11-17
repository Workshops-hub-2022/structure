/*
** EPITECH PROJECT, 2022
** structure
** File description:
** arena
*/

#include "my.h"

bool fight(warrior_t *warrior, warrior_t *enemy)
{
    while (warrior->pv > 0 && enemy->pv > 0) {
        attack(warrior, enemy);
        attack(enemy, warrior);
    }
    if (warrior->pv < 0)
        return (false);
    return (true);
}

void arena(warrior_t *warrior)
{
    int lvl = 0;
    bool lost = false;
    warrior_t *enemy = new_warrior("Enemy");

    printf("Bienvenue dans l'arene champion %s\n", warrior->name);
    while (lvl < 2 && !lost) {
        lost = fight(warrior, enemy);
        level_up(warrior);
        level_up(enemy);
        lvl++;
        printf("Vous avez batu le champion n° %d\n", lvl);
    }

    free_warrior(enemy);
    if (lost)
        printf("Vous avez perdu au lvl: %d!!\n", lvl);
    else
        printf("Vous avez vaincu tous les champions de l'arene\n");
}
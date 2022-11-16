/*
** EPITECH PROJECT, 2022
** structure
** File description:
** main
*/

#include "my.h"

bool is_number(char *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] <= '0' || str[index] >= '9') {
            return (false);
        }
        index++;
    }
    return (true);
}

bool is_error_in_arg(int ac, char **av)
{
    if (ac != 2)
        return (true);
    if (is_number(av[1]))
        return (true);
    return (false);
}

int main(int ac, char **av)
{
    if (is_error_in_arg(ac, av))
        return (84);
    warrior_t *warrior = new_warrior(av[1]);
    arena(warrior);
    free_warrior(warrior);
    return(0);
}

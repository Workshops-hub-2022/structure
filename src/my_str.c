/*
** EPITECH PROJECT, 2022
** structure
** File description:
** my_str
*/

#include "my.h"

int my_strlen(char const *str)
{
    int index = 0;

    if (!str)
        return (0);
    while (str[index] != '\0') {
        index++;
    }
    return (index + 1);
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    return (my_strcpy(dest, src));
}
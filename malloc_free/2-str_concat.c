#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
    char *res;
    unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

    if (s1 != NULL)
        while (s1[len1])
            len1++;

    if (s2 != NULL)
        while (s2[len2])
            len2++;

    res = malloc(len1 + len2 + 1);
    if (res == NULL)
        return (NULL);

    while (i < len1)
    {
        res[i] = s1[i];
        i++;
    }

    while (j < len2)
    {
        res[i + j] = s2[j];
        j++;
    }

    res[i + j] = '\0';

    return (res);
}

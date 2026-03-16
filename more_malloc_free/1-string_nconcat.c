#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: maximum number of bytes from s2
*
* Return: pointer to newly allocated string, or NULL on failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		str[i + j] = s2[j];
		j++;
	}

	str[i + j] = '\0';

	return (str);
}

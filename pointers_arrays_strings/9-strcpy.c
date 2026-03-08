#include <stdio.h>

/**
 * _strcpy - copie une chaine src dans dest
 * @dest: destination
 * @src: chaine source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

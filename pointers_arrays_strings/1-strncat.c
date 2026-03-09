#include <stdio.h>

/**
 * _strncat - concatenates at most n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i])
		i++;

	while (*src && n--)
		dest[i++] = *src++;

	dest[i] = '\0';

	return (dest);
}

#include <stdlib.h>

/**
 * _strdup - returns a pointer to a duplicated string
 * @str: string to duplicate
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	while (i <= len)
	{
		dup[i] = str[i];
		i++;
	}

	return (dup);
}

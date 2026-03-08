#include "main.h"

/**
* rev_string - reverses a string
* @s: string to reverse
*/
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	while (s[i] != '\0')
		i++;

	for (j = 0, i--; j < i; j++, i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
	}
}

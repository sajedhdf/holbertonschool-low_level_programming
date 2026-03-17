/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0 || s[i - 1] == ' ')
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: characters to match
 *
 * Return: number of bytes in the initial segment
 */
unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;
	int	match;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}

		if (match == 0)
			break;

		count++;
	}

	return (count);
}

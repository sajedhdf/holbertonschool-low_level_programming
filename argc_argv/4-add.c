#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if a string contains only digits
 * @str: string to check
 *
 * Return: 1 if number, 0 if not
 */
int	is_number(char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}

	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int	main(int argc, char *argv[])
{
	int	i;
	int	sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

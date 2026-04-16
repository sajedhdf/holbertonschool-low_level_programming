#include "main.h"

/**
 * print_square - prints a square using the character #
 * @size: size of the square
 *
 * Description: prints a square of size size using #
 * If size is less than or equal to 0, it prints only a new line
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: size of the triangle
 *
 * Description: prints a right aligned triangle using #
 * If size is less than or equal to 0, it prints only a new line
 */

void print_triangle(int size)
{
	int i;
	int j;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (space = 1; space <= size - i; space++)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}

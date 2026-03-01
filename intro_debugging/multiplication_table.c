#include <stdio.h>

/**
* print_table - prints a multiplication table
* @size: size of the table
*/
void print_table(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
	for (col = 1; col <= size; col++)
	{
		printf("%d", row * col);
	}
	printf("\n");
	}
}

/**
* main - tests print_table
* Return: 0
*/
int main(void)
{
	print_table(4);
	return (0);
}

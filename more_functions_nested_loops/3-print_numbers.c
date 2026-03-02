#include <stdio.h>

/**
* print_numbers - prints the numbers from 0 to 9
*
* Description: Prints each digit on the same line,
* followed by a new line.
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar('0' + i);

	putchar('\n');
}

/**
* main - checks the print_numbers function
*
* Return: 0
*/
int main(void)
{
	print_numbers();
	return (0);
}

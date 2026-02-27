#include "main.h"

/**
* main - Entry point of the program
*
* Description: calls print_alphabet_x10 to print the alphabet
* 10 times in lowercase.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i;
	char c;

		for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)

		_putchar(c);

	if (i != 9)
		_putchar('\n');
	}
}

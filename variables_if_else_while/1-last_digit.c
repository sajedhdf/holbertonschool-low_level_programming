#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a random number
 *
 * Description: This program assigns a random number to n and
 * prints the last digit of the number followed by a message
 * describing whether it is greater than 5, equal to 0,
 * or less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int last_digit = n % 10;
	{
		printf("Last digit of %d is %d", n, last_digit);
	}
	if (last_digit > 5)
	{
		printf("and is greather than 5"\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0"\n");
	}
	else
	{
		printf("and is less than 6 and not 0"\n");

	return (0);
}

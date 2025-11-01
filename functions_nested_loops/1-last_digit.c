#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit of a randomly generated number
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	printf("Last digit of %d is %d", n, last);

	if (last > 5)
		printf(" and is greater than 5\n");
	else if (last == 0)
		printf(" and is 0\n");
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

	return (0);
}

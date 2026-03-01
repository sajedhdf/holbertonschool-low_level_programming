#include <stdio.h>

/**
* sum_to_n - calculates the sum of integers from 1 to n
* @n: the number up to which to sum
*
* Return: the sum of 1 to n
*/
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	for (i = 1; i <= n; i++)
	sum += i;

	return (sum);
}

/**
* main - tests the sum_to_n function
*
* Return: 0
*/
int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}

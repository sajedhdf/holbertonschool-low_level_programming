#include <stdio.h>

/*
 * main - prints the lowercase alphabet followed by a newline
 *
 * Return: Always 0 (Success)
 *
/**
 * main - prints the lowercase alphabet followed by a newline
 *
 * Return: Always 0 (Success)
 *//
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}

#include <stdio.h>

/*
This program prints the lowercase alphabet followed by a newline.
It uses only two putchar calls.
All code is inside the main function.
*/

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
        putchar(c);

    putchar('\n');

    return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers of base 10 from 0 to 9, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int number = 0;

    while (number <= 9)
    {
        putchar(number + '0');  // Convert the integer to its ASCII character representation.
        number++;
    }

    putchar('\n');

    return (0);
}

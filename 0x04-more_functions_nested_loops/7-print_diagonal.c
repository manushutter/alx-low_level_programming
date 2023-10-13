#include "main.h"

/**
 * print_diagonal - a diagonal line in the terminal
 *
 * @n: int to be checkked
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int spaces = 0;
		int slashes = 0;

		while (spaces < n)
		{
			_putchar(' ');
			spaces++;
		}
		
		_putchar('\\');
		_putchar('\n');
	}
}

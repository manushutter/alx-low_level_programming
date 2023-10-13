#include "main.h"
/**
 * print_numbers - prints 0 - 9 then next line
 *
 * @void: to be checked
 *
 * Return: 1 success 0 otherwise
 */
void print_numbers(void)
{
	int c;

	for (c >= 0; c <= 9; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n - int to be checked
 *
 * Return: 1 success
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}

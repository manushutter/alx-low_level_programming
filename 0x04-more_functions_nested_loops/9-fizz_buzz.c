#include "main.h"

/**
 * main - Entry point for the Fizz-Buzz program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			int temp = i;
			
			while (temp >= 10)
			{
				temp /= 10;
			}
			_putchar(temp + '0');
		}
		_putchar(' ');
		
		if (i % 10 == 0)
		{
			_putchar('\n');
		}
	}
	return (0);
}

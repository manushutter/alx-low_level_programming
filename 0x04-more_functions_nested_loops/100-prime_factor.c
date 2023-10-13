#include "main.h"
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long largest_prime = -1;
	long i;
	
	while (n % 2 == 0)
	{
		largest_prime = 2;
		n = n / 2;
	}
	
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n = n / i;
		}
	}
	
	if (n > 2)
	{
		largest_prime = n;
	}
	print_number(largest_prime);
	_putchar('\n');
	return (0);
}

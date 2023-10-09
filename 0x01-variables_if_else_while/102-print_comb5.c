#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				int first1 = num1 / 10;
				int second1 = num1 % 10;
				int first2 = num2 / 10;
				int second2 = num2 % 10;

				if (num1 > num2)
				{
					int temp = num1;

					num1 = num2;
					num2 = temp;
				}
				putchar(first1 + '0');
				putchar(second1 + '0');
				putchar(' ');
				putchar(first2 + '0');
				putchar(second2 + '0');
				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

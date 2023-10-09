#include <stdio.h>

/*
 * main - Prints alphabet in lowercase without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
	// This program prints the lowercase alphabet excluding 'q' and 'e', followed by a newline.
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}

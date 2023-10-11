#include "main.h"
/*
 * main- Entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char letters = 'a';

	while(letters <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

#include "main.h"
/*
 * main- Entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet(char l)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}

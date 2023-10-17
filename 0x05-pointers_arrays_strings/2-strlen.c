#include "main.h"

/**
 * _strnlen - returns the length of a string
 *
 * @s: str checked
 *
 * Return: length
 */
int _strnlen(char s)
{
	int longi = 0;

	while (*s!='\0')
	{
		longi++;
		s++;
	}
	return (longi);
}

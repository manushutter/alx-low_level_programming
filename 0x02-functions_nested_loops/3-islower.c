#include "main.h"
/**
 * int _islower(int c) - checks for lowercase character
 *
 * Return 1 when c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

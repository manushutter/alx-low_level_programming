#include "main.h"
/**
 * int _islower - finds a lowercase
 *
 * int c parameter for return value interger
 *
 * Return 1 if lowercase and 0 otherwise
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

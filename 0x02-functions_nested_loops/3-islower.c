#include "main.h"
/**
 * int _islower(int c) - checks for lowercase character
 * parameter c is an integer
 * Return value 1 when lowercase
 * Return value 0 when lowercase
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

#include "main.h"
/**
 * int _isalpha(int c) - checks for alphabetic character
 *
 * int c - interger parameter
 *
 * Return: 1 ifc is letter
 *
 * Return: 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

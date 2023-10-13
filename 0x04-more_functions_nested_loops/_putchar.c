#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 *
 * @c: character to print out
 *
 * Return: 1 success -1 failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

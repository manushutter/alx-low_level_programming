#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c ti stdout
 *
 * @c: character to print out
 *
 * Return : 1 success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>
/**
 * main - shows magic
 *
 * @void: checked
 *  Return: 0 success
 */
int main(void)
{
	int n;
	int a[5];
	int *p;
	
	a[2] = 1024;
	p = &n;
	*p = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}

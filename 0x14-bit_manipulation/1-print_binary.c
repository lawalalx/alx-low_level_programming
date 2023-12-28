#include <stdio.h>

/**
 * print_binary - the function that print the int of a nuber given
 * @n: the long int
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');

}

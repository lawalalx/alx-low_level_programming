#include "main.h"
#include <stdio.h>



/**
 * print_numbers - to print a numebrs
 * Description: Prints a number
 * Return: returns 1
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i - '0');
	}
	_putchar('\n');
}

#include "main.h"



/**
 * print_numbers - to print a numebrs
 * Description: Prints a number
 * Return: returns 1
 */

void print_numbers(void)
{
	char digit;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + '0');
	}
	_putchar('\n');
}

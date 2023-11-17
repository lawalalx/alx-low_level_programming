#include "main.h"


/**
 * _puts_recursion - the function
 * @s: the scring argument
 * Return: recursively
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);

}

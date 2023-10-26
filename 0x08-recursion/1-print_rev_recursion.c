#include "main.h"


/**
 * _print_rev_recursion - this is the function
 * @s: the arg
 * Return: the reversed string
 */


void _print_rev_recursion(char *s)
{
	if (*s == 0)
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

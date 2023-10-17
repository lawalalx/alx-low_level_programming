#include "main.h"


/**
 * puts_half - print the second half
 * @str: the arg
 * Return: None
 */

void puts_half(char *str)
{
	int length = 0;
	int start_index, i;

	while (str[length] != '\0')
	{
		length++;
	}

	start_index = (length + 1) / 2;

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

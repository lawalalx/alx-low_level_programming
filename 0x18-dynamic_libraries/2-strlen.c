#include <stdio.h>


/**
 * _strlen - the function
 * @s: the argument
 * Return: the len of str is returned
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

#include <stdio.h>



/**
 * _memset - The function that return a pointer
 * @s: the frst argument
 * @b: the second arg
 * @n: the third arg
 * Return: always the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

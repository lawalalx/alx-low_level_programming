#include <stdio.h>

/**
 * _strncat - the function
 * @dest: the first arg
 * @src: the second arg
 * @n: the third arg
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (result);
}


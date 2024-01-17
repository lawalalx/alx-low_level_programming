#include <stdio.h>




/**
 * _memcpy - the function
 * @dest: the first
 * @src: the second
 * @n: the third
 * Return: returns the pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

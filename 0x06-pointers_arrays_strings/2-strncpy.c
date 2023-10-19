#include <stdio.h>

/**
 * _strncpy - the function
 * @dest: first agr
 * @src: second arg
 * @n: thid arg
 * Return: the pointer to a char
 */


char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (result);
}






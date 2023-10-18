#include <stdio.h>

/**
 * _strcat - the function
 * @dest: the first agr
 * @src: the second argumant
 * Return: always char
 */



char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (result);
}

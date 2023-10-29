#include "main.h"
#include <stddef.h>


/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search in
 * @accept: the set of bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *compare = accept;

		while (*compare)
		{
			if (*s == *compare)
				return (s);
			compare++;
		}

		s++;
	}

	return (NULL);
}


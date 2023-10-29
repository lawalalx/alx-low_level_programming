#include <stdio.h>


/**
 * _strchr - the function
 * @s: the string
 * @c: the character
 * Return: returns the str
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}

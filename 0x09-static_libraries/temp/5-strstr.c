#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of thd
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}


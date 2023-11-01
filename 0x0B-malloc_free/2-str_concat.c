#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: On success,
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	concatenated = malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concatenated[len1 + j] = s2[j];
	}
	concatenated[len1 + len2] = '\0';
	return (concatenated);
}


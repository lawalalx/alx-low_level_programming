#include <stdlib.h>
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: On success, returns a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int i, j, k, len = 0, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		if (str[len] == ' ' && str[len + 1] != ' ' && str[len + 1] != '\0')
		{
			word_count++;
		}
		len++;
	}
	word_count++;
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
	return (NULL);
	}
	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ' && str[k] != '\0')
		{
			k++;
		}
		j = k;
		while (str[k] != ' ' && str[k] != '\0')
		{
			k++;
		}
		words[i] = malloc((k - j + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		for (j = j; j < k; j++)
		{
			words[i][j - k + len] = str[j];
		}
		words[i][j - k + len] = '\0';
	}
	words[i] = NULL;
	return (words);
}


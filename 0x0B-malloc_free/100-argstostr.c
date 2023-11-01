#include <stdlib.h>
/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The argument count.
 * @av: Array of argument strings.
 * Return: On success, returns a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int total_length = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	concatenated = malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concatenated[k] = av[i][j];
			k++;
			j++;
		}
		concatenated[k] = '\n';
		k++;
	}
	concatenated[k] = '\0';
	return (concatenated);
}


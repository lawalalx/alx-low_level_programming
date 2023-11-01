#include <stdlib.h>

/**
 * create_array - the function
 * @size: the arg
 * @c: the arg
 * Return: Always char
 */


char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}


#include <stdio.h>

/**
 * binary_to_uint - this is the function that takes the arg
 * @b: the ints argument
 * Return: returns and int
 */



unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = (result << 1) | (*b - '0');
		b++;
	}

	return (result);
}

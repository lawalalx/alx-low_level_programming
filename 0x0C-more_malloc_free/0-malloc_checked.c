#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - the function
 * @b: the arg
 * Return: always pointer
 */


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}


#include <stdio.h>

/**
 * print_name - Calls a function to print a name
 * @name: Pointer to a character array (string)
 * @f: Pointer to a functiument and returns void
 * Description: This function checks if the provided name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}


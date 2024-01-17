#include <stdio.h>


/**
 * _isupper - To check if the arg is uppercase
 * @c: the agr
 * Return: the uppercase returned
 */

int _isupper(int c)
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		return (0);
	}

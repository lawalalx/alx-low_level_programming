#include <stdio.h>


/**
 *  _isdigit - To check the digit of a arg
 *  @c: the agr
 *  Return: 1 if digit and 0 if not
 */

int  _isdigit(int c)
	{
		if (c >= '0' && c <= '9')
		{
			return (1);
		}
		else
			return (0);
	}

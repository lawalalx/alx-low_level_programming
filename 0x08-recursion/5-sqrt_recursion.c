#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 2));
}

/**
 * sqrt_helper - Helper function to find the square root recursively.
 * @n: The number to find the square root of.
 * @i: The current value to check.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, return -1.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (sqrt_helper(n, i + 1));
}


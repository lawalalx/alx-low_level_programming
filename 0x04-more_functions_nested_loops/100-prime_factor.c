#include <stdio.h>

/**
 * find_largest_prime_factor - Finds the largest prime factor of a number.
 * @num: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor.
 */
unsigned long find_largest_prime_factor(unsigned long num)
{
	unsigned long i;

	for (i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			num = num / i;
			if (num == 1)
				return (i);
		}
	}

	return (0);
}



/**
 * main - Entry point of the program.
 * Return: 0 on successful execution.
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_prime_factor;

	largest_prime_factor = find_largest_prime_factor(number);

	printf("%lu\n", largest_prime_factor);

	return (0);
}


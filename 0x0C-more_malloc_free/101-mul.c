#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * multiply - Multiplies two numbers represented as strings.
 * @num1: First number.
 * @num2: Second number.
 * Return: Pointer to the result as a string.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);

	char *result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < len1 + len2 + 1; i++)
		result[i] = '0';
	for (int i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;

		for (int j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			carry = product / 10;

			result[i + j + 1] = product % 10 + '0';
		}
		result[i] += carry;
	}
	if (result[0] == '0')
	{
		char *newResult = malloc(len1 + len2);

		if (newResult == NULL)
		{
			fprintf(stderr, "Memory allocation failed\n");
			exit(EXIT_FAILURE);
		}
		for (int i = 0; i < len1 + len2; i++)
			newResult[i] = result[i + 1];
		free(result);
		return (newResult);
	}
    return (result);
}


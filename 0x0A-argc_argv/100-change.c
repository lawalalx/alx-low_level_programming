#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates minimum number of coins for change.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents;

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int coins[];

	coins = {25, 10, 5, 2, 1};

	int num_coins;

	num_coins = sizeof(coins) / sizeof(coins[0]);
	int num;

	num = 0;

	for (int i = 0; i < num_coins; i++)
	{
		num += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", num);

	return (0);
}


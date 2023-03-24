#include <stdio.h>
#include <stdlib.h>

/**
 * change - returns the minimum number of coins
 * to make change for an amount of money
 *
 * @cents: the amount of cents to give back
 *
 * Return: the minimum number of coins required
 * to give back the amount of money
 */

int change(int cents)
{
	int coins = 0;

	if (cents <= 0)
		return (0);

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}

	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}

	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}

	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}

	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}

	return (coins);
}

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 ( successful), 1  (unsuccessful)
 */

int main(int argc, char *argv[])
{
	int cents, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	coins = change(cents);

	printf("%d\n", coins);

	return (0);
}

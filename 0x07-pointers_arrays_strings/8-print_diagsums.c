#include "main.h"

/**
 * print_diagsums - prints the sums of the diagonals of a square matrix of ints
 * @a: the matrix to sum diagonals of
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int y;

	for (y = 0; y < size; y++)
	{
		sum1 += a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	_putchar(sum1 + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(sum2 + '0');
	_putchar('\n');
}

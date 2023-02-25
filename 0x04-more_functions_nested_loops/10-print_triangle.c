#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int i = 1, a;

	while (i <= size && size > 0)
	{
		a = 0;
		while (a < size - i)
		{
			_putchar(' ');
			a++;
		}
		a = 0;
		while (a < i)
		{
			_putchar('#');
			a++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}

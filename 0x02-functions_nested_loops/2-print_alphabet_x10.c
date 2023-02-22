#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 - a function that prints 10 times the alphabet,
  * in lowercase, followed by a new line.
  * Return: void (no return value)
*/

void print_alphabet_x10(void)
{
	int alph;
	int count = 10;

	for (count = 0; count < 10; count++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}

		_putchar('\n');
	}
}

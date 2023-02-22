#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - Prints the lowercase alphabet
  *followed by a newline character.
  *
  * Description: This function prints
  *the letters 'a' through 'z' to the console, in
  * lowercase, followed by a newline
  *character to move the cursor to the next line.
  *
  * Return: void (no return value)
*/
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}

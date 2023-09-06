#include "main.h"

/**
 * _print_rev_recursion - function that recursively prints a string in reverse
 * @s: string parameter (pointer to a character
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

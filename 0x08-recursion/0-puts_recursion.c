#include "main.h"

/**
 * _puts_recursion - prints string character by character to stdout
 * @s: pointer to character string (parameter to print)
 *
 * Return: 0 on success, 1 on null condition
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}

#include <stdio.h>
/**
 * _islower - checks for a lowercase character
 * @c: the character to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

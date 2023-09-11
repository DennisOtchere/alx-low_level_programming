#include "main.h"
int help_palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - takes pointer to string as argument,
 * and checks if empty (contains null character)
 * if not empty then it passes the string, index of first char and that of
 * last char to help_palindrome(char *s, int i, int len)
 *
 * @s: pointer to string to be checked whether it's palindrome
 * or not
 *
 * Return: 0 if null char, result of help_palindrome if not empty
 */

int is_palindrome(char *s)
{
	int stringlen = (_strlen_recursion(s) - 1);

	if (*s == '\0')
		return (0);

	return (help_palindrome(s, 0, stringlen));
}

/**
 * help_palindrome - takes pointer to string arg, first char index
 * and last char index to determine if string is a palindrome or not
 *
 * @s: pointer to string argument
 * @i: index of first element/char
 * @len: index of last char/element
 *
 * Return: 1 if string is palindrome, 0 if not
 */
int help_palindrome(char *s, int i, int len)
{
	if (i >= len)
		return (1);

	if (s[i] != s[len])

		return (0);

	return (help_palindrome(s, i + 1, len - 1));
}

/**
 * _strlen_recursion -function that returns the length of a string
 * using recursion
 *
 * @s: string argument to determine length
 *
 * Return: 0 if null, else length of string
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
		return (0);

	length = _strlen_recursion(s + 1);

	return (1 + length);
}

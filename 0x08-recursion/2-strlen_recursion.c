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

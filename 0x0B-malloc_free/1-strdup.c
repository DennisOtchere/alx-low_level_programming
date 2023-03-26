#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: On success, a pointer to the duplicated string. On failure, NULL.
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len = 0;
	char *dup_str = malloc((len +1) * sizeof(char));

	if (str == NULL)
                return (NULL);
	while (str[len] != '\0')
		len++;
	if (dup_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);
}

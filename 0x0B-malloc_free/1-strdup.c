#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: On success, a pointer to the duplicated string. On failure, NULL.
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		dup_str = malloc(strlen(str) * sizeof(char) + 1);
		if (dup_str == NULL)
			return (NULL);
		for (i = 0; i <= strlen(str); i++)
		{
			dup_str[i] = str[i];
		}
		return (dup_str);
	}

}

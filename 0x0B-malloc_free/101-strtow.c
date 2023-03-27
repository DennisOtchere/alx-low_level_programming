#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Split a string into words.
 *
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len = 0, word_count = 0;

	if (str == NULL || strcmp(str, "") == 0 || strcmp(str, " ") == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = i, len = 0; str[j] != ' ' && str[j] != '\0'; j++)
				len++;

			words[k] = malloc(sizeof(char) * (len + 1));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(words[k], &str[i], len);
			words[k][len] = '\0';
			k++;
			i = j;
		}
	}
	words[k] = NULL;
	return (words);
}


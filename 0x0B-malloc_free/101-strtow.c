#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * strtow - function that splits a string into words.
 * @str: string to be splitted into words
 * Return: Pointer to the array of words of the string on success
 */
char **strtow(char *str)
{
	int i, j, k, num_of_words = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')
		&& !(str[i] == ' ' && str[i + 1] == '\0'))
			num_of_words++;
	}
	words = malloc(sizeof(char *) * (num_of_words + 1));
	if (words == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < num_of_words; i++)
	{
		while (*str == ' ')
			str++;
		j = 0;
		while (str[j] != ' ' && str[j] != '\0')
			j++;

		words[i] = malloc(sizeof(char) * (j + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		strncpy(words[i], str, j);
		words[i][j] = '\0';
		str += j;
	}
	words[num_of_words] = NULL;
	return (words);
}

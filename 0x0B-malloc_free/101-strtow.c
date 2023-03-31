#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

int count_words(char *str);
int get_word_length(char *str);
void free_words(char **words, int num_of_words);

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 * Return: Pointer to the array of words of the
 * string on success, NULL on failure.
 */
char **strtow(char *str)
{
	int i, j, num_of_words;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_of_words = count_words(str);

	if (num_of_words == 0)
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

	for (i = 0; i < num_of_words; i++)
	{
		while (*str != '\0' && isspace(*str))
			str++;

		words[i] = malloc(sizeof(char) * (get_word_length(str) + 1));
		if (words[i] == NULL)
		{
			free_words(words, i);
			return (NULL);
		}

		for (j = 0; *str != '\0' && !isspace(*str); j++, str++)
			words[i][j] = *str;

		words[i][j] = '\0';
	}

	words[num_of_words] = NULL;

	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words of.
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, num_of_words = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1])))
			num_of_words++;
	}

	return (num_of_words);
}

/**
 * get_word_length - Gets the length of a word.
 * @str: The string to get the word length of.
 * Return: The length of the word.
 */
int get_word_length(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && !isspace(str[i]); i++)
		;

	return (i);
}

/**
 * free_words - Frees the memory allocated for the words array.
 * @words: The words array to free the memory of.
 * @num_of_words: The number of words in the array.
 */
void free_words(char **words, int num_of_words)
{
	int i;

	for (i = 0; i < num_of_words; i++)
		free(words[i]);

	free(words);
}


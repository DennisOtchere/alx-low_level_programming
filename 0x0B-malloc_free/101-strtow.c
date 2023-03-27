#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * strtow - function that splits a string into words.
 * @str: string to be split into words
 * Return: Pointer to the array of words of the string on success
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);
	int num_of_words = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]) && (i == 0 || !isalpha(str[i - 1])))
			num_of_words++;
	}
	char **words = malloc(sizeof(char *) * (num_of_words + 1));

	if (words == NULL)
		return (NULL);
	int word_index = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]) && (i == 0 || !isalpha(str[i - 1])))
		{
			int word_len = 0;

			while (isalpha(str[i + word_len]))
				word_len++;

			words[word_index] = malloc(sizeof(char) * (word_len + 1));
			if (words[word_index] == NULL)
			{
				for (int j = 0; j < word_index; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(words[word_index], &str[i], word_len);
			words[word_index][word_len] = '\0';
			word_index++;
			i += word_len - 1;
		}
	}
	words[word_index] = NULL;
	return (words);
}


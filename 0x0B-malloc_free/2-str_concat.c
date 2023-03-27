#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Points to the new concatenated string,
 *  and NUll if @s1 or @s2 == NUll or memory is insufficient
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concat_str = malloc(strlen(s1) + strlen(s2) * sizeof(char) + 1);
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		concat_str[i] = s1[i];
	for (i = strlen(s1), j = 0; j < strlen(s2); i++, j++)
	{
		concat_str[i] = s2[j];
	}
	concat_str[i + 1] = '\0';
	return (concat_str);

}

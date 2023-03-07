#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to a string to search through
 * @needle: pointer to the substring to locate
 *
 * Return: pointer to the beginning of the located substring or 0 if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}


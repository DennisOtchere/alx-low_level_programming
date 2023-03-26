#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 *
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: On success, a pointer to the array. On failure, NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (arr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

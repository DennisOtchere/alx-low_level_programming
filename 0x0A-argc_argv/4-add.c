#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *str);

/**
 * main - entry point of program
 * @argc: argument count
 * @argv: string argument at exec
 *
 * Return: 0 (success)
*/


int main(int argc, __attribute__((unused))char *argv[])
{
	int sum, index;

	sum = 0;

	if (argc == 1)
		printf("0\n");
	for (index = 1; index < argc; index++)
	{
		if (_isdigit(argv[index]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[index]);
	}
	if (sum > 0)
		printf("%d\n", sum);
	return (0);
}

/**
 * _isdigit - checks if the parameter passed is an integer
 * @str: input parameter/argument
 *
 * Return: 0 if is an integer, and 1 if its not
*/
int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

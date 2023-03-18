#include <stdio.h>
#include <stdlib.h>
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
		if (!atoi(argv[index]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[index]);
	}
	if (sum != 0)
		printf("%d\n", sum);
	return (0);
}

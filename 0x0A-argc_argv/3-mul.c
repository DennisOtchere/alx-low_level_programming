#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for program
 * @argc: argument count
 * @argv: in this case, integer arguments for multiplication
 * Return: 0 (success)
*/

int main(int argc, __attribute__((unused))char *argv[])
{
	int num1, num2;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}

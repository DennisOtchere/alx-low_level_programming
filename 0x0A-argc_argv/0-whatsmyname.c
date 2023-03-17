#include <stdio.h>
/**
 * main - entry of program
 * @argc: argument count
 * @argv: program string argument at exec
 * Return: 0 (success)
  */
int main(int argc, __attribute__((unused))char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

#include <stdio.h>
/**
 * main - entry point of program
 * @argc: argument count
 * @argv: string argument during exec
 * Return: 0 (success)
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

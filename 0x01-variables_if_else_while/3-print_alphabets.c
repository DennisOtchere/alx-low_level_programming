#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: this prints the alphabet in lowercase then to uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}

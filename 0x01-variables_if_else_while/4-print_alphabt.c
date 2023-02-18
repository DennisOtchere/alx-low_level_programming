
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: this prints lowercase alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}

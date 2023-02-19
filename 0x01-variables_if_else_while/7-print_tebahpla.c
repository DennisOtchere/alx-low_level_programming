#include <stdio.h>

/**
  * main - entry point
  * description: prints lowercase alphabets in reverse
  * using putchar()
  * Return: 0 (success)
*/
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}

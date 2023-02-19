#include <stdio.h>
/**
  * main - entry point
  * Description: prints all possible combinations of single-digit numbers
  * Return: 0 (Success)
*/
int main(void)
{
	int dig1, dig2;

	for (dig1 = 0; dig1 < 10; dig1++)
	{
		for (dig2 = 0; dig2 < 10; dig2++)
		{
			putchar(dig1 + '0');
			putchar(dig2 + '0');
			putchar(',');
		}
	}

	putchar('\n');
	return (0);


}

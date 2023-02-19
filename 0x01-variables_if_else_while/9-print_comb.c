#include <stdio.h>
/**
  * main - entry point
  * Description: prints all possible combinations of single-digit numbers
  * Return: 0 (Success)
*/
int main(void)
{
	int dig1;

	for (dig1 = 0; dig1 <= 9; dig1++)
	{
		putchar(dig1 + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);

}

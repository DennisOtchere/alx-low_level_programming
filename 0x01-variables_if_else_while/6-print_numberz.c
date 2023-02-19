#include <stdio.h>

/**
  * main - entry point
  * description: prints all single digits numbers
  * of base 10 starting from zero
  * Return: 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}

	return (0);
}

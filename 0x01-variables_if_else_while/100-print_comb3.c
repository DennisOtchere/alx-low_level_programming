#include <stdio.h>
/**
  * main - entry point
  * Description: prints all possible different combinations of two digits
  * Return: 0 (Success)
*/
int main(void)
{
	int dig1, dig2;

	for (dig1 =  0; dig1 < 9; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 10; dig2++)
		{
			if ((dig1 == 0 && dig2 == 0) || (dig1 == 1 && dig2 == 0))
			{
				continue;
			}

			putchar(dig1 + '0');
			putchar(dig2 + '0');
			if (dig1 == 8 && dig2 == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);





}

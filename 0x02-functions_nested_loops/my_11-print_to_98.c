#include "main.h"
/**
  * print_to_98 - prints all natural numbers from n to 98,
  * followed by a new line
  * @n: parameter/argument of type int
  * Reaturn: n (Success)
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		if ((_putchar(n / 10 + '0') != 0))
		{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		}
		else if (n < 98)
		{
			n += (n < 98) ? 1 : -1;
			_putchar(' ');
		}
		else
		{	_putchar('\n');
			break;
		}
	}
	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}

}

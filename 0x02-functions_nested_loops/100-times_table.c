#include "main.h"
/**
  * print_times_table - prints times table of any argument
  * except n > 15 and n < 0
  * @n: argument to pass
*/
void print_times_table(int num)
{
	int x, y, z;

	if (num >= 0 && num <= 14)
	{
		for (x = 0; x <= num; x++)
		{
			for (y = 0; y <= num; y++)
			{
				z = x * y;
				if (z > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}

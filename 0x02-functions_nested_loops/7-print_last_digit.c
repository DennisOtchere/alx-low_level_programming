#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
		n = -n;
	result = n % 10;
	_putchar('0' + result);
	return (result);

}

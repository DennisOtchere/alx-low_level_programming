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

	long int abs_n = n < 0 ? -(long int)n : (long int)n;

	result = abs_n % 10;
	_putchar('0' + result);
	return (result);
}

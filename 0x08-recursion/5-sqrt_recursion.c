#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have
 * a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_recursive(n, 1, n));
}

/**
 * sqrt_recursive - recursively find the natural square root of a number
 * @n: the number to find the square root of
 * @start: the starting point for the recursive search
 * @end: the ending point for the recursive search
 *
 * Return: the natural square root of n, or -1 if n does not
 * have a natural square root
 */
int sqrt_recursive(int n, int start, int end)
{
	int mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;

		if (mid * mid == n)
			return (mid);
		if (mid * mid > n)
			return (sqrt_recursive(n, start, mid - 1));
		return (sqrt_recursive(n, mid + 1, end));
	}

	return (-1);
}

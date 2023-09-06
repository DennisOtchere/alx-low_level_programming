/**
 * factorial - returns the factorial of a number n
 * using recursion
 *
 * @n: integer argument to calculate factorial for
 *
 * Return: -1 if n is less than 0, 1 if n equals 0
 * and n*factorial(n-1) for other given values
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

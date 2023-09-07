/**
 * prime - determines if n (integer) by recursion
 *
 * @n: integer argument to determine if its a prime number
 * @idn: multiplies itself to determine if n is a prime number
 * or not.
 *
 * A prime number (or a prime) is a natural number greater than
 * 1 that is not a product of two smaller natural numbers.
 *
 * Return: (1) if product of idn greater than n, (0) if product of idn
 * is equal to n
 */
int prime(int n, int idn)
{

	if ((idn * idn) > n)
		return (1);
	if ((idn * idn) == n)
		return (0);
	return (prime(n, idn + 1));
}

/**
 * is_prime_number - determines if a given integer in a prime number or
 * not by calling prime() function
 *
 * @n: integer to check if prime or not
 *
 * Return: return prime(n,2)
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	else
		return (prime(n, 2));

}

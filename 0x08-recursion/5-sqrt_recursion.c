int sqrt_algorithm(int n, int root);

/**
 * sqrt_algorithm - recursively calls itself to determine the integer (root)
 * that multiplies itself to give the square (n)
 *
 * @n: integer to determine square root for
 * @root: integer that multiply itself to find the roots that form the square
 * of the given integer n.
 *
 * Return: (-1) if root*root is greater than n, (root) if root*root is equal
 * to n
 */

int sqrt_algorithm(int n, int root)
{


	if ((root * root) > n)
		return (-1);
	if ((root * root) == n)
		return (root);
	return (sqrt_algorithm(n, root + 1));
}

/**
 * _sqrt_recursion - returns the square root of a given interger (n)
 * by calling the sqrt_algorithm function
 *
 * @n: integer value to calculate square root for
 *
 * Return: square root of the given integer
 */

int _sqrt_recursion(int n)
{
	int result;

	if (n <= 0)
		return (n);
	if (n == 1)
		return (1);
	result = sqrt_algorithm(n, 0);
	return (result);

}

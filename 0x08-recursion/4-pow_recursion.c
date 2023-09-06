/**
 * _pow_recursion - returns the result of the power of two integers
 * i.e. x - base, and y - exponenent
 *
 * @x: the base value of type int
 * @y: the exponential value of type int
 *
 * Return: -1 if y < o, and 1 if y = 0
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	result = _pow_recursion(x, y - 1);
	return (x * result);

}

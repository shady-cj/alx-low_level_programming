/**
 * _pow_recursion - a function that returns
 * the exponent of a number
 * @x: The number to return the power of
 * @y: The power
 * Return: The result of @x to the power
 * of @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}

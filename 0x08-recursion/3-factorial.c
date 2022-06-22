/**
 * factorial - A function that returns the
 * factorial of a number
 * @n: The number in which we want to get
 * its factorial
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return n * factorial(n - 1);
}

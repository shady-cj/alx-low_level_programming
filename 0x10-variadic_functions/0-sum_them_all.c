#include <stdargs.h>
/**
 * sum_them_all - A function that takes variable number of integers
 * and sums them
 * @n: The number of variable int
 * Return: The sum lf them all
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	if (n == 0)
		return (0);
	va_list numbers;

	va_start(numbers, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_args(numbers, int);
	}
	va_end(numbers);
	return (sum);
}

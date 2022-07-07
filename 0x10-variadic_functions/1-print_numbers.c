#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - A function that prints number with a separator
 * @separator: The separator
 * @n: The number of variable
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num, i;
	va_list numbers;

	if (separator == NULL)
		separator = "";
	if (n == 0)
		return;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		if (i < n - 1)
			printf("%d%s", num, separator);
		else
			printf("%d\n", num);
	}
	va_end(numbers);
}

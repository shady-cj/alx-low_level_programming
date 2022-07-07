#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - The function prints series of strings
 * passed in separated by a separator.
 * @separator: The separator
 * @n: The number of arguments passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	if (separator == NULL)
		separator = "";
	if (n == 0)
		return;
	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *) == NULL ? "(nil)" : va_arg(str, char *);
		if (i < n - 1)
			printf("%s%s", s, separator);
		else
			printf("%s\n", s);
	}
	va_end(str);
}

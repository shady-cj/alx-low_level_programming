#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - Prints all the variable parameters passed in
 * @format: The formatter
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	int len, i = 0, ci, cc;
	double cf;
	char *cs, *glob;
	va_list var;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	len = (int) strlen(format);
	va_start(var, format);
	while (i < len)
	{
		glob = "";
		if (i < len - 1)
			glob = ", ";
		switch (format[i])
		{
			case 'c':
				cc = va_arg(var, int);
				printf("%c%s", cc, glob);
				break;
			case 'i':
				ci = va_arg(var, int);
				printf("%d%s", ci, glob);
				break;
			case 'f':
				cf = va_arg(var, double);
				printf("%f%s", cf, glob);
				break;
			case 's':
				cs = va_arg(var, char *);
				printf("%s%s", cs == NULL ? "(nil)" : cs, glob);
				break;
		}
		i++;
	}
	va_end(var);
	printf("\n");
}

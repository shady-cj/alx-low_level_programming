#include "main.h"
/**
 * print_diagonal - A function that print lines with '\'
 * @n: The number of slash to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		j = 0;

		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		if (i != (n - 1))
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}

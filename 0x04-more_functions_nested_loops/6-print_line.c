#include "main.h"
/**
 * print_line - A function that print lines with _
 * @n: The number of '_' to print
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

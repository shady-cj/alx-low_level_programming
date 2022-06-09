#include "main.h"
#include <stdlib.h>
/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 * Return: void
 */
void print_number(int n)
{
	int i = abs(n);
	int rem, mod;

	if (n < 0)
	{
		_putchar('-');
	}
	rem = i / 10;
	mod = i % 10;
	if (rem > 0)
		print_number(rem);
	_putchar(mod + '0');
}

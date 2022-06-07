#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: The number to check
 * Return: 1 if positive, 0 if zero and -1 if negative
 * Example: print_sign(0) = 0 prints 0
 *	print_sign(1) = 1 prints +
 *	print_sign(-1) = prints -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

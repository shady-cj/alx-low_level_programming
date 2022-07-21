#include "main.h"
void print_binary_rec(unsigned long int n);

/**
 * print_binary - Converts decimal to binary
 * @n: The decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}
	print_binary_rec(n);
}


/**
 * print_binary_rec - a helper function that prints the binary
 * @n: The number
 * Return: void
 */
void print_binary_rec(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary_rec(n >> 1);
	if (n & 1)
	{
		_putchar(1 + '0');
	}
	else
	{
		_putchar(0 + '0');
	}
}

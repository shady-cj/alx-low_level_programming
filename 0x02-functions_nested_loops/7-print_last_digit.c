#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to check
 * Return: int the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = abs(n % 10);
	_putchar(last_digit + '0');
	return (last_digit);
}

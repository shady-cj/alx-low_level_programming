#include "main.h"
/**
 * print_square - A function that prints '#' n times
 * @size: The size of the '#'
 * Return: void
 */

void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		j = 0;

		while (j < size)
		{
			_putchar('#');
			j++;
		}
		if (i < (size - 1))
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}

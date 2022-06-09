#include "main.h"

/**
 * print_triangle - A function that prints '#' in form of a triangle
 * @size: This is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1;
	int j;

	while (i <= size)
	{
		j = size;

		while (j > 0)
		{
			if (j <= i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
			j--;
		}
		if (i < size)
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}

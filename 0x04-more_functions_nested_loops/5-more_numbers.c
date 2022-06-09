#include "main.h"
/**
 * more_numbers - Prints numbers from 0 through 14, 10 times
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int i;
	int div;
	int rem;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			rem = i % 10;
			div = i / 10;
			if (i > 9)
				_putchar(div + '0');
			_putchar(div + '0');

		}
		_putchar('\n');
	}
}


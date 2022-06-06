#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int n;
	int i;
	int k;
	int j;
	int p;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 9; i++)
		{
			for (k = n; k < 10; k++)
			{
				if (k > n)
					p = 0;
				else
					p = i + 1;
				for (j = p; j < 10; j++)
				{
					putchar((n % 10) + '0');
					putchar((i % 10) + '0');
					putchar(' ');
					putchar((k % 10) + '0');
					putchar((j % 10) + '0');

					if (n + i + k + j < 116)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

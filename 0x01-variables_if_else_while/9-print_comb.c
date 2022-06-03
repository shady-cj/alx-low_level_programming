#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int alpha;

	for (alpha = 0 ; alpha <= 9 ; alpha++)
	{
		putchar((alpha % 10) + '0');
		if (alpha < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


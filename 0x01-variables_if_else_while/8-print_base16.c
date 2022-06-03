#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 16 ; num++)
	{
		if (num > 9)
		{
			char a;

			for (a = 'a'; a <= 'f'; a++)
			{
				putchar(a);
				num++;
			}
			continue;
		}
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}


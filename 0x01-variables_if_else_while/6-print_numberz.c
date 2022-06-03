#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int dec;

	for (dec = 0; dec < 10; dec++)
	{
		putchar((dec % 10) + '0');
	}
	putchar('\n');
	return (0);
}

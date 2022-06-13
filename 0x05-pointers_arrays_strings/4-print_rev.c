#include <stdio.h>
#include <string.h>

/**
 * print_rev - Reverses a string
 * @s: The string to be reversed
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}

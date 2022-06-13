#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverse a given string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char a[strlen(s)];
	int i;
	int j;

	for (i = 0; i < strlen(s); i++)
	{
		j = i + 1;

		a[i] = s[strlen(s) - j];
	}
	for (i = 0; i < strlen(a); i++)
	{
		s[i] = a[i];
	}
}

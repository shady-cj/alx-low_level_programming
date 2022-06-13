#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverse a given string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int len = (int) strlen(s);
	char a;
	int i;
	int j;

	for (i = 0; i < len; i++)
	{
		j = i + 1;
		a = s[i];
		if (j > (len - j))
			break;
		s[i] = s[len - j];
		s[len - j] = a;
	}
}

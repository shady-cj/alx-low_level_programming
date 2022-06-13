#include <stdio.h>
#include <string.h>
/**
 * puts_half - Prints the second half of the string
 * @str: String to split
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = (int) strlen(str);

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;
	for (; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

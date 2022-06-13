#include <stdio.h>
#include <string.h>
/**
 * puts2 - Prints every other character of a string starting with the first character
 * @strL String to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

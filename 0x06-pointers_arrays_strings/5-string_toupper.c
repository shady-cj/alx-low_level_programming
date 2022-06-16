#include <string.h>
/**
 * string_toupper - it converts a string to all
 * uppercase
 * @str: the string to ve converted
 * Return: The coverted string
 */

char *string_toupper(char *str)
{
	int i = 0;
	int len = (int) strlen(str);

	while (i < len)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

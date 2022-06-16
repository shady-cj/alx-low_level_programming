#include <ctype.h>
#include <string.h>
/**
 * cap_string - Capitalize all strings
 * @str: Strings to be captitzed
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	char s[14] = {
		' ', '\n', '\t', ',', ';',
		'.', '!', '?', '"', '\'',
		'(', ')', '{', '}'
	};
	int len = (int) strlen(str);
	int j, k, i;

	i = 0;

	while (i < len)
	{
	j = i - 1;

	if (j >= 0)
	{
	k = 0;

	while (k < 14)
	{
	if (str[j] == s[k])
	{
	str[i] = toupper(str[i]);
	break;
	}
	k++;
	}
	}
	else
	{
	str[i] = toupper(str[i]);
	}
	i++;
	}
	return (str);
}

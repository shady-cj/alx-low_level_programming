#include <ctype.h>
#include <string.h>
/**
 * cap_string - Capitalize all strings
 * @str: Strings to be captitzed
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	char s[14];
	int len = (int) strlen(str);
	int j, k, i;

	i = 0;

	s[0] = ' ';
	s[1] = '\n';
	s[2] = '\t';
	s[3] = ',';
	s[4] = ';';
	s[5] = '.';
	s[6] = '!';
	s[7] = '?';
	s[8] = '"';
	s[9] = '\'';
	s[10] = '(';
	s[11] = ')';
	s[12] = '{';
	s[13] = '}';


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

#include <string.h>
/**
 * leet - encodes a given string
 * @str: string to be encoded
 * Return: Encoded String
 */
char *leet(char *str)
{
	int len = (int) strlen(str);
	int num[5] = {4, 3, 0, 7, 1};
	char alpha[10];
	int i, j;

	alpha[0] = 'o';
	alpha[1] = 'l';
	alpha[3] = 'e';
	alpha[4] = 'a';
	alpha[7] = 't';

	i = 0;

	while (i < len)
	{
		j = 0;

		while (j < 5)
		{
			if (str[i] ==
			alpha[num[j]] ||
			str[i] ==
			alpha[num[j]] - 32)
			{
				str[i] = num[j] + '0';
				break;
			}
			j++;
		}
		i++;


	}
	return (str);



}

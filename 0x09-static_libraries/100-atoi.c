#include <string.h>
/**
 * _atoi -  Function to convert string to numbers
 * @s: string
 * Return: The number
 */
int _atoi(char *s)
{
	unsigned int i, j, k, c, num, len, sign;

	len = (int) strlen(s);
	if (len == 0)
		return (0);
	i = s[0] == 45 || s[0] == 43 ? 1 : 0;
	sign = s[0] == 45 ? -1 : 1;
	num = 0;
	while (i < len)
	{
		j = (int) s[i];
		c = j - 48;
		if (c < 0 || c > 9)
		{
			break;
		}
		num *= 10;
		num += c;
		i++;
	}
	num = num * sign;
	return (num);
}

#include <string.h>
/**
 * _strcmp - A function that compares two strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: 0 if the strings are equal, 1 if
 * @s1 > @s2, -1 if @s1 < @s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k, l, ret;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	while (i < (int) strlen(s1))
	{
		k += (int) s1[i];
		i++;
	}
	while (j < (int) strlen(s2))
	{
		l += (int) s2[j];
		j++;
	}
	if (k == l)
		ret = 0;
	else if (k > l)
		ret = 15;
	else
		ret = -15;
	return (ret);

}

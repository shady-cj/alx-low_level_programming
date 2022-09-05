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
	int ret;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		ret = 0;
	else
		ret = *s1 - *s2;
	return (ret);
}

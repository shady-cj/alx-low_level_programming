#include <stdlib.h>
/**
 * _strchr - Returns a pointer to the first
 * occurence of the character c in the
 * string s
 * @s: string to check
 * @c: The character to be found
 * Return: The pointer to the found string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);


}

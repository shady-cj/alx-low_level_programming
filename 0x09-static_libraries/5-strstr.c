#include <stdlib.h>
#include <stdio.h>
/**
 * _strstr - The function locates a substr
 * ing
 * @haystack: The string to locate from
 * @needle: The strings to locate
 * Return: Return the found word
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{


		do {
			if (needle[index + 1] == '\0')
				return (haystack);
			index++;
		} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return (NULL);
}

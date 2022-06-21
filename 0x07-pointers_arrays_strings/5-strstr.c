#include <stdlib.h>
/**
 * _strstr - The function locates a substr
 * ing
 * @haystack: The string to locate from
 * @needle: The strings to locate
 * Return: Return the found word
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, f;

	j = 0;
	f = 0;
	for (i = 0; needle[i] != '\0'; i++)
	{

		while (haystack[j] != '\0')
		{
			if (f)
			{
				if (haystack[j] != needle[i])
				{
					i = 0;
					f = 0;
				}
				else
				{
					j++;
				}
				break;
			}
			if (haystack[j] == needle[i])
			{
				j++;
				f = 1;
				break;
			}
			j++;
		}
		if (haystack[j] == '\0' && needle[i] != '\0')
		{
			return (NULL);

		}
	}
	if (needle[i] == '\0' && f == 1)
	{
		return (needle);
	}
	return (NULL);
}

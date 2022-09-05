#include <stdlib.h>
/**
 * _strpbrk - a function that searches a
 * string for any of a set of bytes
 * @s: srring to be searched
 * @accept: set of strings to search for
 * Return: the first occurence that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i, id;

	id = -1;

	while (*accept != '\0')
	{
		i = 0;

		while (s[i] != '\0')
		{
			if (s[i] == *accept)
			{
				id = id == -1 || i < id ? i : id;
				break;
			}

			i++;
		}
		accept++;
	}
	return (id == -1 ? NULL : s + id);
}

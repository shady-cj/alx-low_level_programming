#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that creates space in memory
 * to concatenates 2 strings
 * @s1: The main string to concatenate into
 * @s2: The second string we need to concatenate with
 * @n: The first n bytes of s2
 * Return: It returns the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, slen, i, j;
	char *s;

	len = (int) strlen(s1);
	slen = len + n + 1;

	s = malloc(sizeof(char *) * slen);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = s1[i];
	
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}

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
	unsigned int len, slen, len0, i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = (int) strlen(s1);
	len0 = (int) strlen(s2);

	if (n >= len0)
		n = len0;
	slen = len + n + 1;

	s = malloc(sizeof(char) * slen);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		s[i++] = s2[j];
	}
	s[i] = '\0';
	return (s);
}

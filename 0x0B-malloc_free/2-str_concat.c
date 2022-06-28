#include <stdlib.h>
#include <string.h>
/**
 * str_concat - A function that concatenates 2 strings
 * @s1: The first string
 * @s2: The second string
 * Return: The results of the 2 strings
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = (int) strlen(s1);
	len2 = (int) strlen(s2);

	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	
	i = 0;
	while (*s1 != '\0')
	{
		s[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		s[i] = *s2;
		s2++;
		i++;
	}
	s[i + 1] = '\0';
	return (s);

}

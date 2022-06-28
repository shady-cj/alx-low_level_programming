#include <stdlib.h>
#include <string.h>
/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given
 * as a parameter
 * @str: The string to be duplicated
 * Return: The pointer to the string
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *stp;

	if (str == NULL)
		return (NULL);
	len = (int) strlen(str) + 1;
	stp = malloc(sizeof(char) * len);
	if (stp == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		stp[i] = str[i];
		i++;
	}
	return (stp);

}

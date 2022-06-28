#include <stdlib.h>
#include <string.h>
/**
 * argstostr - A function that converts the program  arguments
 * to a string
 * @ac: length of arguments
 * @av: arguments
 * Return: The new string
 */


char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, idx, j, idlen, idstr;

	idx = 0;
	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (idx < ac)
	{
		len += (int) strlen(av[idx]);
		len += 1;
		idx++;
	}
	len++;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	idstr = 0;
	for (i = 0; i < ac; i++)
	{
		idlen = (int) strlen(av[i]);
		for (j = 0; j < idlen; j++)
		{
			str[idstr] = av[i][j];
			idstr++;
		}
		str[idstr] = '\n';
		idstr++;

	}

	str[idstr] = '\0';
	return (str);
}

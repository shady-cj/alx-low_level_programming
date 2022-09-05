/**
 * _strspn - A function that gets the length
 * of a prefix substring
 * @s: The string to check
 * @accept: The string to check for
 * Return: returns the length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);

}

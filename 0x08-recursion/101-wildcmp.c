
/**
 * wildcmp - a function that compares 2
 * strings
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: an integer of 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	char *s;

	s = s2;
	s++;
	if (*s2 == '*')
	{
		if (*s1 != '\0')
		{
			if (*s == '*' || *s == *s1)
				return (wildcmp(s1, s2 + 1));
			else
				return (wildcmp(s1 + 1, s2));
		}
		else
		{
			if (*s != '*' && *s != '\0')
				return (0);
			else if (*s == '\0')
				return (1);
			else
				return (wildcmp(s1, s2 + 1));
		}

	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
	return (0);
}

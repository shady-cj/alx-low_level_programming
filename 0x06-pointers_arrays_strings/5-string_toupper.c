
/**
 * string_toupper - it converts a string to all
 * uppercase
 * @str: the string to ve converted
 * Return: The coverted string
 */

char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (str);
}

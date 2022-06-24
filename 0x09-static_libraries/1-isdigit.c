#include <ctype.h>
#include "main.h"

/**
 * _isdigit - A function that checks if a character is a digit
 * or not
 * @c: Character to check
 * Return: int 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}

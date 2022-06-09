#include <ctype.h>
#include "main.h"
/**
 * _isupper - A function that returns 1 or 0 if a character
 * is upper case or not
 * @c: The character to be evaluated
 * Return: int 0 or 1
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}

#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for characters
 * @c: character to check
 * Return: int (0 if not alpha, 1 if alpha))
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}

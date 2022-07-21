#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: 1 if little endian or 0 if big endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *s = (char *) &n;

	if (*s)
		return (1);
	else
		return (0);
}

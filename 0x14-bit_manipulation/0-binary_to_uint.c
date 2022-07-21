#include "main.h"
int convert_to_binary_num(char c);
/**
 * binary_to_uint - This function takes in a binary and converts
 * to an unsigned int
 * @b: The binary
 * Return: The unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int bin;
	int len = (int) strlen(b), i,j = 0;

	if (b == NULL)
		return (num);

	i = len - 1;
	while (i >= 0)
	{
		bin = convert_to_binary_num(b[j]);
		if (bin == 2)
			return (0);

		num += bin * _pow(2, i);
		i--;
		j++;
	}
	return (num);
}

/**
 * pow - performs exponential operation
 * @x: The base number
 * @y: The power
 * Return: The result of x raise to the power of y
 */

unsigned int _pow(int x, int y)
{
	int i = 0;
	int num = 1;
	
	if (y == 0)
		return (num);
	while (i < y)
	{
		num *= x;
		i++;
	}
	return (num);
}

/**
 * convert_to_binary_num - This takes in a char and converts to num
 * and also check if d number is more than 1 as that wont be valid
 * binary
 * @c: The char
 * Return: The number
 */
int convert_to_binary_num(char c)
{
	int num = (int) c - 48;
	if (num > 1 || num < 0)
		return (2);
	return (num);
}

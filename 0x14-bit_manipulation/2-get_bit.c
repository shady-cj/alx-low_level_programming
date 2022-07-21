#include "main.h"
int get_bit_index(size_t n, unsigned int index);
/**
 * get_bit - a function that returns the value of a bit at a
 * given index
 * @n: The decimal
 * @index: The index
 * Return: The value at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0 && index != 0)
		return (-1);
	if (n == 1 && index != 0)
		return (-1);
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return (get_bit_index(n, index));

}

/**
 * get_bit_index - This is the helper function that gets the
 * bit at index @index
 * @index: The index to get to bit
 * @n: The decimal we are working with
 * Return: The bit at the index
 */
int get_bit_index(size_t n, unsigned int index)
{
	unsigned int i = 0, j;
	size_t k = n;

	if (n == 0 && index == 0)
		return (0);
	while (i < index && k > 0)
	{

		k >>= 1;
		i++;
	}
	if (i < index || k == 0)
		return (-1);
	j = (k & 1) ? 1 : 0;
	return (j);

}

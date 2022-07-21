#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to
 * 0 at a given index.
 * @n: The address of the int
 * @index: The index to change
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}

#include "main.h"
/**
 * set_bit -  a function that sets the value of a bit to 1
 * at a given index
 * @n: The address of the integer
 * @index: The index to change
 * Return: Returns 1 on success or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}

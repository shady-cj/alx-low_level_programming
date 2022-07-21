#include "main.h"
/**
 * flip_bits - A function that returns the number of bits you
 * would need to flip to get
 * from one number to another.
 * @n: The first number
 * @m: The second number
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int n_ph = n;
	unsigned long int m_ph = m;

	while (n_ph > 0 || m_ph > 0)
	{
		if ((n_ph & 1) != (m_ph & 1))
			num++;
		n_ph >>= 1;
		m_ph >>= 1;
	}
	return (num);
}

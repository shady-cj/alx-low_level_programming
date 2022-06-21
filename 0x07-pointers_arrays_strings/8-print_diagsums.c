#include <stdio.h>

/**
 * print_diagsums - a functions that prints
 * the sum of two diagonals of a sqaure
 * matrix integer
 * @a: The matrix
 * @size: The size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, idx1, sum2, idx2;

	idx1 = 0;
	sum1 = 0;
	idx2 = size - 1;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[idx1];
		sum2 += a[idx2];
		idx1 += size + 1;
		idx2 += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}

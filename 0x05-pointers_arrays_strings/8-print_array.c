#include <stdio.h>
#include <string.h>
/**
 * print_array - Prints the n content of  an array of integers
 * @a: Array to be sliced
 * @n: Number of elements to be printed from the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%c, ", a[i]);
		else
			printf("%c", a[i]);
	}
}

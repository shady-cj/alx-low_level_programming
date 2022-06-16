
/**
 * reverse_array - This reverses the array a
 * @a: The array to be reversed
 * @n: The length of the array;
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, initial_value;

	for (i = 0; i < n; i++)
	{
		j = i + 1;
		initial_value = a[i];

		if (i > (n - j))
			break;

		a[i] = a[n - j];
		a[n - j] = initial_value;

	}
}

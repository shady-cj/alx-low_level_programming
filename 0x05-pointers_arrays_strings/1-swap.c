/**
 * swap_int - Swaps the value of two integers
 * @a: First value to be swapped
 * @b: Second value to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	int j = *b;

	*b = i;
	*a = j;
}

int find_sqrt(int n, int sugg_root);
/**
 * _sqrt_recursion - A recursive function
 * to find the square root of a number
 * @n: The number to find the square root
 * of
 * Return: The square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (find_sqrt(n, n / 2));
}
/**
 * find_sqrt - An helper function that finds
 * that finds the square root
 * @n: The number
 * @sugg_root: The suggested root
 * Return: -1 or the actual square root
 */
int find_sqrt(int n, int sugg_root)
{
	int div = n / sugg_root;
	int sq = sugg_root * sugg_root;
	if (sugg_root > 100000)
		sugg_root = sugg_root / 2;
	if (div < sugg_root)
		return (find_sqrt(n, sugg_root - 1));
	else if (div == sugg_root && sq == n)
		return (sugg_root);
	else
		return (-1);
}

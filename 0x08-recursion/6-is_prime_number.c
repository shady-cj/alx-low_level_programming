int check_prime(int, int);
/**
 * is_prime_number - a function that checks
 * of a number is a prime number
 * @n: The input number to check
 * Return: 0 if it is not prime and 1 if it
 * is prime
 */

int is_prime_number(int n)
{
	int p;
	if (n < 0 || n == 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - verifies if it's prime
 * @n: The number
 * @iter: The numbers to check with
 * Return: 1 or 0 if it's prime or not
 */
int check_prime(int n, int iter)
{
	int rem;

	if (iter == 1)
		return (1);
	rem = n % iter;
	if (rem == 0)
		return (0);
	return (check_prime(n, iter - 1);
}

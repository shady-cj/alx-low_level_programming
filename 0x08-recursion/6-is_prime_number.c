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
	p = n % is_print_number(n - 1);
}

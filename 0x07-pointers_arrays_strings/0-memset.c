/**
 * _memset - The function fills the first
 * bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: The string to be mutated
 * @b: The string to replace it with
 * @n: The number of bytes to replace
 * Return: the pointer string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _memcpy - A functions that copies n bytes
 * from one memory area src to memory area
 * dest
 * @dest: The destination we wanto copy to
 * @src: The source we want to copy from
 * @n: The number of bytes to be copied
 * Return: The pointer to the str
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

/**
 * _strncpy - A function to copy the value of src
 * into dest
 * @dest: The destination we want to copy into
 * @src: The source we want to copy from
 * @n: The number of bytes we need to copy
 * Return: The copied value is returned
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

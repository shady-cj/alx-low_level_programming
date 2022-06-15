#include <string.h>
/**
 * _strncat - A functions that concatenates two
 * strings of a certain number of bytes
 * @dest: The string we need to concatenate into
 * @src: The string we need to concatenate with
 * @n: int - number of bytes from @src to concat.
 * Return: The concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

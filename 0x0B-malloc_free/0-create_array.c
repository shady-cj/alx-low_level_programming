#include <stdlib.h>
/**
 * create_array - A function that creates dynamic memory allocation for chars of
 * size @size
 * @size: The size of the char to be created in memory
 * @c: The character to initialize with
 * Return: A pointer to the character
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

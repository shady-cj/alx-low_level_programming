#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * list_len - The function counts
 * the number of nodes
 * @h: The pointer to the head.
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

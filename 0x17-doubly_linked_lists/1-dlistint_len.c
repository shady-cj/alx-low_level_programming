#include "lists.h"

/**
 * dlistint_len - it counts the number of nodes in a doubly
 * linked list and returns it
 * @h: The head node of the linked list
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = NULL;
	size_t len = 0;

	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}

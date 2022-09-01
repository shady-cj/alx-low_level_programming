
#include "lists.h"
/**
 * print_dlistint - Prints each node of the doubly linked list
 * @h: The head node of the doubly linked list
 * Return: The size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = NULL;
	size_t size = 0;

	if (h == NULL)
		return (size);
	ptr = h;

	while (ptr != NULL)
	{
		size++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (size);
}

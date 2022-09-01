#include "lists.h"

/**
 * get_dnodeint_at_index -  a function that returns the nth node
 * of a dlistint_t linked list.
 * @head: The head node..
 * @index: The index at which to get
 * Return: The address of the node at that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}

#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new
 * node at a given position.
 * @h: The pointer to the header node address
 * @n: The value to add to the node
 * @idx: The index at which to insert the node
 * Return: The address of the inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = NULL;
	dlistint_t *previous_p = NULL;
	dlistint_t *new = NULL;
	size_t i = 0;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (new == NULL)
		return (NULL);	
	ptr = *h;
	while (ptr != NULL)
	{
		if (i == idx)
			break;
		previous_p = ptr;
		ptr = ptr->next;
		i++;
	}
	if (i == idx)
	{
		if (previous_p != NULL)
			previous_p->next = new;
		new->prev = previous_p;
		new->next = ptr;
		if (ptr != NULL)
			ptr->prev = new;
		if (previous_p == NULL)
			*h = new;
		return (new);
	}
	free(new);
	return (NULL);
}

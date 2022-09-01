#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at
 * index of a dlistint_t linked list.
 * @head: The pointer to the head node.
 * @index: The index to delete
 * Return: 1 if successful -1 if unsuccessful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = NULL;
	dlistint_t *previous_p = NULL;
	size_t i = 0;

	ptr = *head;

	while (ptr != NULL)
	{
		if (i == index)
			break;
		i++;
		previous_p = ptr;
		ptr = ptr->next;
	}
	if (i == index)
	{
		if (ptr == NULL)
			return (-1);
		if (ptr->next != NULL)
			(ptr->next)->prev = previous_p;
		if (previous_p != NULL)
			previous_p->next = ptr->next;
		if (previous_p == NULL)
			*head = ptr->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	return (-1);
}

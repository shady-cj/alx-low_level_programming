#include "lists.h"
/**
 * insert_nodeint_at_index - This inserts a node into an existing
 * linked list
 * @head: The head node
 * @idx: The index to insert at
 * @n: The value to insert
 * Return: The new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL;
	listint_t *new = NULL;
	listint_t *temp = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	ptr = *head;

	while (i < idx - 1)
	{
		temp = ptr;
		ptr = ptr->next;
		if (ptr == NULL || temp == NULL)
			return (NULL);
		i++;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (*head);
}

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
	ptr = *head;
	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (*head);
	}
	if (*head == NULL)
		return (NULL);
	while (i < idx)
	{
		temp = ptr;
		if (temp == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	new->next = ptr;
	temp->next = new;
	return (new);
}

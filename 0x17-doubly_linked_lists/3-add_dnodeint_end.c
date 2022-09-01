#include "lists.h"

/**
 * add_dnodeint_end - This functions adds a new node to the end
 * of doubly linked list
 * @head: The pointer to the head node pointer address
 * @n: The new node value
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *ptr = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	new->prev = ptr;
	return (new);
}

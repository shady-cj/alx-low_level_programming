#include "lists.h"
/**
 * add_nodeint - Adds a new node to the beginning of a linked list
 * @head: address to the head pointer
 * @n: The new int to be added
 * Return: The new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (new);
	new->n = n;
	new->next = NULL;
	ptr = *head;
	if (ptr == NULL)
	{
		*head = new;
		return (*head);
	}

	new->next = ptr;
	*head = new;

	return (*head);
}

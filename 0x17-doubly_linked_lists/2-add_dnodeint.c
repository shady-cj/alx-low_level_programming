#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly
 * linked list
 * @head: The pointer to the head nodd
 * @n: The value of the new node
 * Return: The head of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}

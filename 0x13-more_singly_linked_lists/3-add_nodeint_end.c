#include "lists.h"
/**
 * add_nodeint_end - A function that adds the node to
 * the end
 * @head: The head pointer
 * @n: The number to be added
 * Return: pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (new);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new;
	return (*head);
}

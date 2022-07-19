#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: The address of the head node
 * Return: The new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_ptr = NULL;
	listint_t *next_ptr = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next_ptr = (*head)->next;
		(*head)->next = prev_ptr;
		prev_ptr = *head;
		*head = next_ptr;

	}
	*head = prev_ptr;
	return (*head);
}

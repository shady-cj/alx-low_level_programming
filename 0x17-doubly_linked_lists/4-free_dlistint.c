#include "lists.h"

/**
 * free_dlistint - The function frees previously allocated space
 * for a doubly linked list
 * @head: The head node of the doubly linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

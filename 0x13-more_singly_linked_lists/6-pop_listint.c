#include "lists.h"
/**
 * pop_listint - deletes the head of the list
 * @head: The pointer to the head
 * Return: The value at the head
 */
int pop_listint(listint_t **head)
{
	int n_placeholder = 0;
	listint_t *ptr = NULL;
	listint_t *temp = NULL;

	ptr = *head;
	if (ptr == NULL)
		return (0);
	n_placeholder = ptr->n;
	temp = ptr->next;
	free(ptr);
	ptr = NULL;
	*head = temp;
	return (n_placeholder);
}

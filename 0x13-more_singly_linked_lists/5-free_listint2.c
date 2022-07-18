#include "lists.h"
/**
 * free_listint2 - This functions frees the linked list from
 * memory
 * @head: The pointer to the head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *tmp = NULL;

	if (head == NULL)
		return;
	ptr = *head;

	while (ptr != NULL)
	{
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}
	free(ptr);
	*head = NULL;
}

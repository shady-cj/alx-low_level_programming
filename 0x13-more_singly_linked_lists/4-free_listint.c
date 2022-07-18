#include "lists.h"
/**
 * free_listint - This functions frees the linked list from
 * memory
 * @head: The pointer to the head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = NULL;

	ptr = head;

	while (ptr != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
	free(ptr);
}

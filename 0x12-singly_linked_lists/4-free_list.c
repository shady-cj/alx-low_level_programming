#include "lists.h"
/**
 * free_list - This function frees previously allocated memory
 * from the linked list
 * @head: The head to the linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head == NULL)
		return;
	ptr = head;
	while (ptr != NULL)
	{
		free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
	free(ptr);
}

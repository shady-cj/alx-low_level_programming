#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t
 * linked list (safe version)
 * @h: The head node address
 * Return: The number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *ptr = NULL;
	listint_t *hold = NULL;
	size_t address = 0;

	if (*h == NULL)
		return (0);

	address = find_loop(*head);
	ptr = *h;

	if (address == 0)
	{
		while (ptr != NULL)
		{
			hold = ptr->next;
			free(ptr);
			ptr = hold;
			count++;
		}
	}
	else
	{
		while ((size_t ptr) != address)
		{
			hold = ptr->next;
			free(ptr);
			ptr = hold;
			count++;
		}
		free(ptr);
		ptr = NULL;
		count++;
	}
	return (count);
}


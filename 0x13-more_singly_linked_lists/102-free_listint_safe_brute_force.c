#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t
 * linked list (safe version)
 * @h: The head node address
 * Return: The number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	struct address *addr_head = NULL;
	size_t count = 0;
	listint_t *ptr = NULL;
	listint_t *hold = NULL;
	int found_loop = 0;

	addr_head = malloc(sizeof(struct address));
	if (addr_head == NULL)
		exit(98);
	addr_head->addr = 0;
	addr_head->link = NULL;
	if (*h == NULL)
		exit(98);
	ptr = *h;
	found_loop = check_add_address(&addr_head, (size_t) ptr);
	while (ptr != NULL)
	{
		found_loop = check_add_address(&addr_head, (size_t) ptr->next);
		if (!found_loop)
		{
			hold = ptr->next;
			free(ptr);
			ptr = NULL;
			ptr = hold;
		}
		else
		{
			break;
		}
		count++;
	}
	free(ptr);
	ptr = NULL;
	*h = ptr;
	free_address(&addr_head);
	return (count);
}


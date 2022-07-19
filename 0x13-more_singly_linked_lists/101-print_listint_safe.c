#include "lists.h"
/**
 * struct address - The structure is linked list that keeps track of
 * loops in an existing linked list
 * @addr: The address of all d elements
 * @link: The links to the next node
 */
struct address
{
	size_t addr;
	struct address *link;
};
/**
 * print_listint_safe - A function that prints a listint_t
 * linked list (safe version)
 * @head: The head node
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	struct address *addr_head = NULL;
	struct address *addr_ptr = NULL;
	struct address *addr_hold = NULL;
	struct address *addr_new = NULL;
	size_t count = 0;
	const listint_t *ptr = NULL;
	int found_loop = 0;

	addr_head = malloc(sizeof(struct address));
	if (addr_head == NULL)
		exit(98);
	addr_head->addr = 0;
	addr_head->link = NULL;

	if (head == NULL)
		exit(98);
	ptr = head;
	while (ptr != NULL)
	{
		addr_ptr = addr_head;
		while (addr_ptr->link != NULL)
		{
			if (addr_ptr->addr == (unsigned long int) ptr ||
				addr_ptr->link->addr == (unsigned long int) ptr)
			{
				addr_ptr = addr_head;
				while (addr_ptr != NULL)
				{
					addr_hold = addr_ptr->link;
					free(addr_ptr);
					addr_ptr = addr_hold;

				}
				found_loop = 1;
				break;
			}

			addr_ptr = addr_ptr->link;
		}
		if (!found_loop)
		{
			addr_new = malloc(sizeof(struct address));
			if (addr_new == NULL)
				exit(98);
			addr_new->addr = (unsigned long int) ptr;
			addr_new->link = NULL;
			addr_ptr->link = addr_new;
			printf("[%p] %d\n", (void *) ptr, ptr->n);
		}
		else
		{
			printf("-> [%p] %d\n", (void *) ptr, ptr->n);
			break;
		}
		ptr = ptr->next;
		count++;
	}
	return (count);
}

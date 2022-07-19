#include "lists.h"


int check_add_address(struct address **addr_head, size_t ptr);

/**
 * print_listint_safe - A function that prints a listint_t
 * linked list (safe version)
 * @head: The head node
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	struct address *addr_head = NULL;	
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
		found_loop = check_add_address(&addr_head, (size_t) ptr);
		if (!found_loop)
		{
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

/**
 * check_add_address - This is an helper function that checks if an address
 * is registered if not then it adds the address
 * @addr_head: The head node to the address struct
 * @ptr: The addresses;
 * Return: 1 if found and 0 if not
 */
int check_add_address(struct address **addr_head, size_t ptr)
{
	struct address *addr_ptr = NULL;
	struct address *addr_new = NULL;


	addr_ptr = *addr_head;
	while (addr_ptr->link != NULL)
	{
		if (addr_ptr->addr == ptr ||
			addr_ptr->link->addr == ptr)
		{
			addr_ptr = *addr_head;
			while (addr_ptr != NULL)
			{
				addr_new = addr_ptr->link;
				free(addr_ptr);
				addr_ptr = addr_new;

			}
			return (1);
		}

		addr_ptr = addr_ptr->link;
	}
	addr_new = malloc(sizeof(struct address));
	if (addr_new == NULL)
		exit(98);
	addr_new->addr = (unsigned long int) ptr;
	addr_new->link = NULL;
	addr_ptr->link = addr_new;
	return (0);

}

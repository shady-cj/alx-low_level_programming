#include "lists.h"

/**
 * print_listint_safe - A function that prints a listint_t
 * linked list (safe version)
 * @head: The head node
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *ptr = NULL;
	size_t address = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	address = find_loop(head);
	if (address == 0)
	{
		while (ptr != NULL)
		{
			printf("[%p] %d\n", (void *) ptr, ptr->n);
			ptr = ptr->next;
			count++;
		}
	}
	else
	{
		while ((size_t) ptr != address)
		{
			printf("[%p] %d\n", (void *) ptr, ptr->n);
			ptr = ptr->next;
			count++;
		}
		printf("[%p] %d\n", (void *) ptr, ptr->n);
		ptr = ptr->next;
		count++;
		printf("-> [%p] %d\n", (void *) ptr, ptr->n);
	}
	return (count);
}
/**
 * find_loop - This helper functions helps to check if a loop exists in
 * a linked list using floyd's cycle finding algorithm
 * @head: The head node
 * Return: the address of the end node if there is a loop else
 * returns 0
 */
size_t find_loop(const listint_t *head)
{
	const listint_t *hare = NULL;
	const listint_t *tortoise = NULL;
	const listint_t *last_addr = NULL;

	if (head->next == NULL)
	{
		return (0);
	}
	hare = head->next->next;
	tortoise = head->next;
	while (hare != NULL)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;

			while (tortoise != hare)
			{
				last_addr = tortoise;
				tortoise = tortoise->next;
			}
			return ((size_t) last_addr);
		}
		hare = (hare->next)->next;
		tortoise = tortoise->next;
	}
	return (0);
}

#include "lists.h"
#include <stdio.h>
/**
 * print_listint - A function that prints a linked lists of type of
 * listint_t
 * @h: a pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	if(h == NULL)
		return (count);
	ptr = h;
	while(ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}

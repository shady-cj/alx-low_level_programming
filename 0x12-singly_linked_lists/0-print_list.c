#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - Printing the value of linked list and returning
 * the number of nodes
 * @h: The pointer to the head.
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *ptr = NULL;
	size_t count;

	if (h == NULL)
		return (0);
	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s", strlen(ptr->str), ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}

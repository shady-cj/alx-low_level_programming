#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Implementing jump search with a singly linked list
 * @list: A pointer to the linked list array
 * @size: The size of the linked list
 * @value: The element to be searched
 * Return: Pointer to the first node where element is located or NULL
 * if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *fwd_ptr;
	listint_t *bwd_ptr, *probe_ptr;
	size_t jump = sqrt(size), i;

	if (size == 0 || list == NULL)
		return (NULL);
	fwd_ptr = list;
	while (fwd_ptr)
	{
		bwd_ptr = fwd_ptr;
		for (i = 0; i < jump; i++)
		{
			if (fwd_ptr->next)
				fwd_ptr = fwd_ptr->next;
		}
		printf("Value checked at index [%lu] = [%d]\n", fwd_ptr->index, fwd_ptr->n);
		if (value < fwd_ptr->n || fwd_ptr->index == size - 1)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					bwd_ptr->index, fwd_ptr->index);
			probe_ptr = bwd_ptr;
			while (probe_ptr->index <= fwd_ptr->index)
			{
				printf("Value checked at index [%lu] = [%d]\n",
						probe_ptr->index, probe_ptr->n);
				if (probe_ptr->n == value)
					return (probe_ptr);
				probe_ptr = probe_ptr->next;
				if (probe_ptr == NULL)
					break;
			}
			return (NULL);
		}

	}
	return (NULL);

}

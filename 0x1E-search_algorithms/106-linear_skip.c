#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * linear_skip - Implementing a linear search using a skip
 * list accross an express lane
 * @list: The linked list to be searched
 * @value: The value to be searched
 * Return: NULL if not found or the pointer to the first occurence
 */


skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *fwd_ptr, *bwd_ptr, *probe_ptr, *exp_ptr;
	int end = 0;

	fwd_ptr = list;
	while (fwd_ptr != NULL)
	{
		exp_ptr = fwd_ptr->express;
		bwd_ptr = fwd_ptr;
		if (exp_ptr)
		{
			fwd_ptr = exp_ptr;
			printf("Value checked at index [%lu] = [%d]\n",
					fwd_ptr->index, fwd_ptr->n);
		}
		else
		{
			end = 1;
			while (fwd_ptr->next)
				fwd_ptr = fwd_ptr->next;
		}
		if (value <= fwd_ptr->n || end)
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

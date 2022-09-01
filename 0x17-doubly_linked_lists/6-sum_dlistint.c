#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: The head node of the linked list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

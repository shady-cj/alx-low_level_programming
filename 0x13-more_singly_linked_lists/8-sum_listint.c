#include "lists.h"
/**
 * sum_listint - Adds all the int of linked list
 * @head: The head node
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = NULL;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

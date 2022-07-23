#include "lists.h"
/**
 * find_listint_loop - The functions finds and returns the start of
 * loop in a linked list
 * @head: The head node
 * Return: The pointer to the start of the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = NULL;
	listint_t *tortoise = NULL;

	if (head == NULL || head->next == NULL)
		return (NULL);
	hare = head->next->next;
	tortoise = head;

	while (hare != NULL)
	{
		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				hare = hare->next;
				tortoise = tortoise->next;
			}
			return (tortoise);
		}
		if (hare->next != NULL)
			hare = hare->next->next;
		tortoise = tortoise->next;
	}
	return (NULL);
}

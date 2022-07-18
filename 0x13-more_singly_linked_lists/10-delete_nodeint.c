#include "lists.h"
/**
 * delete_nodeint_at_index - This deletes the node at a given index
 * @head: head node
 * @index: index to delete from
 * Return 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL;
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	ptr = *head;

	while (i < index - 1)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL || ptr->next == NULL)
		return (-1);
	temp = ptr;
	temp->next = ptr->next->next;
	free(ptr->next);
	ptr->next = NULL;
	return (1);

}

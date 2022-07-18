#include "lists.h"
/**
 * get_nodeint_at_index - This function traverses a linked list
 * and returns the node at a given index
 * @head: The head node
 * @index: The index to return
 * Return: The node if found else return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int i = 0;

	ptr = head;
	while (i < index)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

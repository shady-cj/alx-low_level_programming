#include <string.h>
#include "lists.h"
/**
 * add_node_end - A function that adds a new value to the end of
 * a linked list
 * @head: Addresss to the head of the linked list
 * @str: The string to be initialized in the new node
 * Return: Returns the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *temp = NULL;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (*head);
}

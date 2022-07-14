#include "lists.h"
#include <string.h>
/**
 * add_node - This function adds new node to the beginning
 * of a linkef list
 * @head: The pointer to the linked list
 * @str: The string
 * Return: pointer to the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	list_t *temp = NULL;

	temp = calloc(1, sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	if (*head == NULL)
	{
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		ptr = *head;
		temp->next = ptr;
		*head = temp;
	}
	return (*head);
}

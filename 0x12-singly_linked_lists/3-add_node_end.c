#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to the head of the list
 * @str: contains value of the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tailnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	/*traverse list to find tail node*/
	tailnode = *head;

	while (tailnode->next != NULL)
		tailnode = tailnode->next;

	/*append newnode to the end*/
	tailnode->next = newnode;

	return (newnode);
}

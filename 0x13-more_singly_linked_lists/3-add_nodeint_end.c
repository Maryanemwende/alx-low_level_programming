#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 *
 * @head: pointer to first node in list
 * @n: new value
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tailnode;
	listint_t *traverser;

	if (head == NULL)
		return (NULL);

	tailnode = (listint_t *)malloc(sizeof(listint_t));

	if (tailnode == NULL)
		return (NULL);

	tailnode->n = n;

	traverser = *head;

	if (traverser == NULL)
	{
		*head = tailnode;
	}
	else
	{
		while (traverser->next != NULL)
		{
			traverser = traverser->next;
		}
		traverser->next = tailnode;
	}

	tailnode->next = NULL;

	return (tailnode);
}

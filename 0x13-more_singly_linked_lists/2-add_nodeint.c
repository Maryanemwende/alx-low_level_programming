#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: pointer to first node of the list
 * @n: new value
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;

	*head = newnode;

	return (newnode);
}

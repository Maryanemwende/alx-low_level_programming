#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to the first node in the list
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *curr_node;
	int data;

	if (*head == NULL || head == NULL)
		return (0);

	curr_node = *head;
	data = curr_node->n;
	*head = (*head)->next;
	free(curr_node);

	return (data);
}

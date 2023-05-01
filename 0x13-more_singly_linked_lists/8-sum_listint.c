#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n)
 *
 * @head: pointer to first node in list
 * Return: sum of all the data (n), 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *curr_node;
	int sum = 0;

	if (head == NULL)
		return (0);

	curr_node = head;

	while (curr_node != NULL)
	{
		sum += curr_node->n;
		curr_node = curr_node->next;
	}
	return (sum);
}

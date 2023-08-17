#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: pointer to head of dlistint_t
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int list_sum = 0;

	while (head)
	{
		list_sum += head->n;
		head = head->next;
	}
	return (list_sum);
}

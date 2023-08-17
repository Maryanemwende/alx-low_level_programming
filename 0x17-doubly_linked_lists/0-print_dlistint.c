#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the double linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t total_nodes = 0;

	while (h)
	{
		total_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (total_nodes);
}

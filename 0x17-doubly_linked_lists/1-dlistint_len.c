#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * @h: pointer to head of the list
 * Return: number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t total_nodes = 0;

	while (h)
	{
		total_nodes++;
		h = h->next;
	}
	return (total_nodes);
}

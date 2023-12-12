#include "lists.h"

/**
 * print_listint - To prints all the elements of a linked list
 * @h: Head pointer
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t v = 0;

	while (h)
	{
	printf("%d\n", h->n);
	v++;
	h = h->next;
	}
	return (v);
}

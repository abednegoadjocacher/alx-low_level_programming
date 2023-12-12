#include "lists.h"
/**
 * listint_len - To returns the number of elements in the linked lists
 * @h: The head pointer
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t v = 0;

	while (h)
	{
	v++;
	h = h->next;
	}
	return (v);
}

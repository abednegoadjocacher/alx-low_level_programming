#include <stdlib.h>
#include "lists.h"
/**
 * list_len - To returns the number of elements
 * @h: A pointer pointing to the list_t list
 * Return: The number of elements
 */
size_t list_len(const list_t *h)
{
	size_t v = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
	v++;
	h = h->next;
	}
	return (v);
}

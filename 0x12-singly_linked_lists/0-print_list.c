#include <stdio.h>
#include "lists.h"
/**
 * print_list - To  prints all the elements of a linked list
 * @h: A pointing to the list_t list to be  printed
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t ab = 0;

	while (h)
	{
	if (h->str == NULL)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	ab++;
	}
	return (ab);
}

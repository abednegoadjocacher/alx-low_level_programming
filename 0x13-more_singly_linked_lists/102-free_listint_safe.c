#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: A pointer to the first node in the linked list
 * Return:  The number  freed in the link list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int den;
	listint_t *tmp;

	if (!h || !*h)
	return (0);
	while (*h)
	{
	den = *h - (*h)->next;
	if (den > 0)
	{
	tmp = (*h)->next;
	free(*h);
	*h = tmp;
	length++;
	}
	else
	{
	free(*h);
	*h = NULL;
	length++;
	break;
	}
	}
	*h = NULL;
	return (length);
}

#include "lists.h"
/**
 * get_nodeint_at_index - Returns node at a certain index in a linked list
 * @head:  A pointer to first node in the linked list
 * @index: The index of the node
 * Return: A pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int v = 0;
	listint_t *tmp = head;

	while (tmp && v < index)
	{
	tmp = tmp->next;
	v++;
	}
	return (tmp ? tmp : NULL);
}

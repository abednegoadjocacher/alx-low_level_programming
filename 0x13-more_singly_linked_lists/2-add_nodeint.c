#include "lists.h"
/**
 * add_nodeint - Adding a new node at the beginning of the linked list
 * @head: A pointer to the first node
 * @n: The data to be inserted into new node
 * Return: A pointer to the new node,or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_at_beg;

	node_at_beg = malloc(sizeof(listint_t));
	if (!node_at_beg)
	return (NULL);
	node_at_beg->n = n;
	node_at_beg->next = *head;
	*head = node_at_beg;
	return (node_at_beg);
}

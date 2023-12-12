#include "lists.h"
/**
 * insert_nodeint_at_index - Inserting a new node
 * @head: A pointer to the first node in the list
 * @idx: Indexing where the new node is to be added
 * @n: The data to insert at the new node
 * Return: A pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_1;
	listint_t *tmp = *head;

	new_1 = malloc(sizeof(listint_t));
	if (!new_1 || !head)
	return (NULL);
	new_1->n = n;
	new_1->next = NULL;
	if (idx == 0)
	{
	new_1->next = *head;
	*head = new_1;
	return (new_1);
	}
	for (i = 0; tmp && i < idx; i++)
	{
	if (i == idx - 1)
	{
	new_1->next = tmp->next;
	tmp->next = new_1;
	return (new_1);
	}
	else
tmp = tmp->next;
	}
	return (NULL);
}

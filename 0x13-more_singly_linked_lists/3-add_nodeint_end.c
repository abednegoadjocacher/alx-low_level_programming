#include "lists.h"
/**
 * add_nodeint_end - Adds a node at the end of a linked list
 * @head: A pointer to the first element in the list
 * @n: The data to be inseredt in the new node
 * Return: A pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_1;
	listint_t *tmp = *head;

	new_1 = malloc(sizeof(listint_t));
	if (!new_1)
	return (NULL);
	new_1->n = n;
	new_1->next = NULL;
	if (*head == NULL)
	{
	*head = new_1;
	return (new_1);
	}
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = new_1;
	return (new_1);
}

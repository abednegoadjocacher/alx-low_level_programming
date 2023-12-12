#include "lists.h"
/**
 * pop_listint - To deletes the head of a linked list
 * @head: A pointer to the first node in the linked list
 * Return: The data inside the deleted node,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
	return (0);
	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (n);
}

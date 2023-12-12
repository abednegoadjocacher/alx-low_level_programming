#include "lists.h"
/**
 * delete_nodeint_at_index - Deleting a node at a certain index
 * @head: A pointer to the first node in the list
 * @index: Indexing of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *new = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	return (-1);
	if (index == 0)
	{
	*head = (*head)->next;
	free(tmp);
	return (1);
	}
	while (i < index - 1)
	{
	if (!tmp || !(tmp->next))
	return (-1);
	tmp = tmp->next;
	i++;
	}
	new = tmp->next;
	tmp->next = new->next;
	free(new);
	return (1);
}

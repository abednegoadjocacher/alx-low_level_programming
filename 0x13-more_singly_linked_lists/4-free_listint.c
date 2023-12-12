#include "lists.h"
/**
 * free_listint - To free a linked list
 * @head: A ponter to the link list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}
}

#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: The head pointer
 * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *low = head;
	listint_t *hast = head;

	if (!head)
	return (NULL);
	while (low && hast && hast->next)
	{
	hast = hast->next->next;
	low = low->next;
	if (hast == low)
	{
	low = head;
	while (low != hast)
	{
	low = low->next;
	hast = hast->next;
	}
	return (hast);
	}
	}
	return (NULL);
}

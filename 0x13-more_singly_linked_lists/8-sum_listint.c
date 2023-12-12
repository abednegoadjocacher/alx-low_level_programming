#include "lists.h"
/**
 * sum_listint - calculates the sum of all  data in a listint_t list
 * @head: A pointer to first node in the linked list
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}
	return (sum);
}

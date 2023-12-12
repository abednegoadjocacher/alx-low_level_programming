#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counting the number of nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t
 * Return: 0.
 * Otherwise - The number of nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *t_1, *har;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
	return (0);
	t_1 = head->next;
	har = (head->next)->next;
	while (har)
	{
	if (t_1 == har)
	{
	t_1 = head;
	while (t_1 != har)
	{
	node++;
	t_1 = t_1->next;
	har = har->next;
	}
	t_1 = t_1->next;
	while (t_1 != har)
	{
	node++;
	t_1 = t_1->next;
	}
	return (node);
	}
	t_1 = t_1->next;
	har = (har->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Printing a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, indx = 0;

	node = looped_listint_len(head);
	if (node == 0)
	{
	for (; head != NULL; node++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (indx = 0; indx < node; indx++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}

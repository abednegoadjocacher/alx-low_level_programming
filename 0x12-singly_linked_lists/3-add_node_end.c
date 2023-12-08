#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adding a new node at the end
 * @head: A double pointer pointing to the list_t list
 * @str: The string to be place in the new node
 * Return: Address of the new element, or NULL for failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_1;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;
	new_1 = malloc(sizeof(list_t));
	if (!new_1)
	return (NULL);
	new_1->str = strdup(str);
	new_1->len = len;
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

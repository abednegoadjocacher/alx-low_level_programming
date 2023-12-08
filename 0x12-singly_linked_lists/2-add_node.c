#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adding a new node at the beginning
 * @head: The double pointer to the list_t
 * @str: The new string to be added in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_1;
	unsigned int len = 0;

	new_1 = malloc(sizeof(list_t));
	if (new_1 == NULL)
	return (NULL);
	while (str[len])
	len++;
	new_1->len = len;
	new_1->str = strdup(str);
	new_1->next = (*head);
	(*head) = new_1;
	return (new_1);
}

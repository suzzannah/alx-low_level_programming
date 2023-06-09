#include "lists.h"
/**
 * add_node - this adds a new node at the beginning
 * @head: head of the linked list.
 * code by sue
 * @str:a string to store in the list.
 * Return:the address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}

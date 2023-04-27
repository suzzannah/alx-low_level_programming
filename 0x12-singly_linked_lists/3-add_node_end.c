#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen -This finds length of a string
 * @str:the string to find the length of
 * code by sue
 * Return: the length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int y;

	for (y = 0; str[y]; y++)
		;
	return (y);
}

/**
 * add_node_end - they add a new node to the end of linked list
 * @head:the double pointer to a linked list
 * @str: string to add to the new node
 * code by sue
 * Return:a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}

#include "lists.h"
/**
 * list_len - this returns the number of elements in a list.
 * @h: a singly linked list.
 * Return:the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}

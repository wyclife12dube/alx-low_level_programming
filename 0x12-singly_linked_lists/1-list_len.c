#include "lists.h"

/**
 * list_len - find number of the elements in a linked list
 * @h: linked list_t list
 * Return: number of elements in n
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}

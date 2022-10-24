#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to head of the listint_t to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *mdw;

	while (head)
	{
		mdw = head->next;
		free(head);
		head = mdw;
	}

}

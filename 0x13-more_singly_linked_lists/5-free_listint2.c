#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the addressof listint_t list
 * Description: it sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *mdw;

	if (head == NULL)
		return;
	while (head)
	{
		mdw = (*head)->next;
		free(*head);
		*head = mdw;
	}
	head = NULL;
}

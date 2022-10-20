#include "lists.h"
/**
 * add_node - adds new node to the beginning of
 * a list_t list
 * @head: a pointerto head of the list
 * @str: string to add to the list_t list
 * Return: if the function fails return NULL
 * else return the address of a new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}

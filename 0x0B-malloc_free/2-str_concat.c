#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatinates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ji;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ji = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ji] != '\0')
		ji++;

	concat = malloc(sizeof(char) * (i + ji + 1));

	if (concat == NULL)
		return (NULL);
	i = ji = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[ji] != '\0')
	{
		concat[i] = s2[ji];
		i++, ji++;
	}
	concat[i] = '\0';
	return (concat);
}

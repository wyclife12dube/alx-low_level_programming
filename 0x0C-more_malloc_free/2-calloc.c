#include "main.h"

/**
 * _calloc - allocated memory for nmemb elemn de size of bytes
 * @nmemb: number of elements in the array
 * @size: bytes for each position in array
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}

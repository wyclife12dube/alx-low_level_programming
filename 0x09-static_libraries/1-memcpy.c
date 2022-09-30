#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: destination memory
 * @src: source memory
 * @n: number of bytes to be copied
 *
 * Return: a copied string from the source
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}

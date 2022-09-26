#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to
 * @s: a string
 * @b: charactor
 * @n: integer
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}

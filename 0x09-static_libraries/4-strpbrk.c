#include "main.h"

/**
 * _strpbrk - seraches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the sety of bytes to be searched for
 *
 * Return: if a set matched - a pointer to the matched byte
 * if n set matched - 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}

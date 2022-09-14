#include "main.h"

/**
 * _abs - function that computse the value of an integer
 * @c: is the int to be used
 *
 * Return: 0.
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (0);
	}
	else
		return (c * -1);
}

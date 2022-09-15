#include "main.h"

/**
 * _isupper - checks if a charactor is uppercase or not
 * @c: charactor to be tested
 * Return: 1 whatever it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}

#include "main.h"
/**
 * _islower - function to check for lowercase charactor
 * @c: is the int will use for the argument function
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

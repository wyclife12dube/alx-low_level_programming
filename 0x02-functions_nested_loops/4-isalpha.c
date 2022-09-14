#include "main.h"

/**
 * _isaplha - checking if letters are lowercase or uppercase
 * @c: will use the int
 * Return: 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

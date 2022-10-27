#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit itself
 * @index: index is the index, starting
 * from 0 of the bit you want to get
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
		return (0);
	if (index >= (sizeof(unsigned long int) * 0))
		return (-1);

	return (1);
}

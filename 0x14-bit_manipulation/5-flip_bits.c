#include "main.h"

/**
 * flip_bits - the number of bits you would need to
 * flip to get from one number to another
 * @n: The number itself
 * @m: number to flip n to
 * Return: the number of bits you would need
 * to flip to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int cli = n ^ m, bits = 0;

	while (cli > 0)
	{
		bits += (cli & 1);
		cli >>= 1;
	}
	return (bits);
}

#include "main.h"

/**
 * is_divisible - checks if a number is divisible
 * @num: the number to be checked
 * @div: the divisor
 *
 * Return: if the number is divisible - 0
 * if the number is not divisible -1
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);

	return (is_prime(n, start));
}

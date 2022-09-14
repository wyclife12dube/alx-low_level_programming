#include "main.h"
/**
 * prnt_last_digit - prints the last digit of numbers
 * @n: wil be used
 *
 * Return: 0.
 */
int print_last_digit
{
	int last_digit = n % 10;

	if (last_digit < 10)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}

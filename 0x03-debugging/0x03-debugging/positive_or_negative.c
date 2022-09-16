#include "main.h"

/**
 * positive_or_negative - tests function that prints if integer is positive or negative
 *
 * @i: the variable that holds the value to work on
 *
 * Return: Always 0 (Success)
 *
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}
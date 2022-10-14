#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (sum);
}

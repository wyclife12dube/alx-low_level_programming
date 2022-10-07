#include <unstid.h>

/**
 * _putchar - writes the charactor c to stdout
 * @c: the charactor to print
 *
 * Return: On success
 * on erro, -1 is returned, and arrono is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

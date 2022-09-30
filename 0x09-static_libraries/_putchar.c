#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the chasractor c to stdout
 * @c: the charactor to print
 *
 * return: on success 1
 * on error, -1 is returned and errorno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the programe
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}

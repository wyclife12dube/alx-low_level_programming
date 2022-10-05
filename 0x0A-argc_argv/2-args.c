#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the programe
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
			printf("%s\n", argv[count]);
	}
	return (0);
}

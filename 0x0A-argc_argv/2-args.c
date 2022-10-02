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
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
			printf("%s\n", argv[count]);
	}
}

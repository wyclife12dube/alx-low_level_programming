#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguments a programe it recieves
 * @argc: argument count
 * @argv:argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}

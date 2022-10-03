#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; 1 < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include "main.h"

/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded  string
 */

char *leet(char *z)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', '0', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (z[i] == arr[j])
				z[i] = replace[j / 2];
		}
	}
	return (z);
}

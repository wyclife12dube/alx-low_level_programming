#include "main.h"

/**
 * cap_string - function that capitalize first charactor of a word
 * @str: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char dubWyc[] = " \n\t,;.!?\"(){}";

	if (z[0] >= 'a' && z[0] <= 'z')
		z[0] -= 32;

	for (; z[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (z[i] == dubWyc[j])
			{
				if (z[i + 1] >= 'a' && z[i + 1] <= 'z')
					z[i + 1] -= 32;
			}
		}
	}
	return (z);
}

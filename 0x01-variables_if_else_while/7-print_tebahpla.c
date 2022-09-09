#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char space = '\n',
	     alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; --alphabet)
	{
		putchar(alphabet);
	}
	putchar(space);

	return (0);
}

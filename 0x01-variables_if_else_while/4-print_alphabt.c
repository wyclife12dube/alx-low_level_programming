#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alphabet,
	     space = '\n';

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			continue;
		}
		putchar(alphabet);
	}
	putchar(space);
	return (0);
}

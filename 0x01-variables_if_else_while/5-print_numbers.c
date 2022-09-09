#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Anyway 0 (Success)
 *
 */
int main(void)
{
	char num,
	     space = '\n';

	for (num = '0'; num <= '9'; ++num)
	{
		putchar(num);
	}
	putchar(space);
	return (0);
}

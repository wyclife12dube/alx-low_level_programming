#include <stdio.h>
/**
 * main - Entry pint
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char num,
	     letter,
	     space = '\n';
	for (num = '0'; num <= '9'; ++num)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; ++letter)
	{
		putchar(letter);
	}
	putchar(space);
	return (0);
}

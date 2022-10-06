#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index marking the end
 * of the first word contained within a string
 * @str: the string to be searched
 *
 * Return: the index marking the end of the initial wor pointed to by str
 */

int word_len(char *str)
{
	int clife = 0, len = 0;

	while (*(str + clife) && *(str + clife) != ' ')
	{
		len++;
		clife++;
	}
	return (len);
}

/**
 * count_words - counts the number of words contained within a string
 * @str: the string tobe searched
 *
 * Return: the number of words contained within str
 */

int count_words(char *str)
{
	int clife = 0, words = 0, len = 0;

	for (clife = 0; *(str + clife); clife++)
		len++;
	for (clife = 0; clife < len; clife++)
	{
		if (*(str + clife) != ' ')
		{
			words++;
			clife += word_len(str + clife);
		}
	}
	return (words);
}

/**
 * strtow - splits a string into words
 * @str: the string to be split
 *
 * Return: if str = NULL, str = @@, of the function fails - NULL
 * otherwise - a parameter to an array of strings (words)
 */

char **strtow(char *str)
{
	char **strings;
	int clife = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[clife] == ' ')
			clife++;

		letters = word_len(str + clife);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[clife++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}

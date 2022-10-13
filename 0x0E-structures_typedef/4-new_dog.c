#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the lenght of a string
 * @str: string measured
 * Return: the length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - compiles a string pointed to by src
 * including terminating null byte, to a buffer pointed to
 * @dest: buffer storing the string copy
 * @src: source string
 * Return: pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	int suf = 0;

	for (suf = 0; src[suf]; suf++)
		dest[suf] = src[suf];

	dest[suf] = '\0';
	return (dest);
}


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Kitty;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	Kitty = malloc(sizeof(dog_t));
	if (Kitty == NULL)
		return (NULL);

	Kitty->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (Kitty->name == NULL)
	{
		free(Kitty);
		return (NULL);
	}
	Kitty->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (Kitty->owner == NULL)
	{
		free(Kitty->name);
		free(Kitty);
		return (NULL);
	}
	Kitty->name = _strcopy(Kitty->name, name);
	Kitty->age = age;
	Kitty->owner = _strcopy(Kitty->owner, owner);

	return (Kitty);
}

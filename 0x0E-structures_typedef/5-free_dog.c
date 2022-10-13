#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - free dog
 * @d: dog to be freed
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
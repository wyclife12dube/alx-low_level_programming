#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory
 * @d: this is an array
 * Description: free memory for struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

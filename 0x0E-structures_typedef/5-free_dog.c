#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - releases the memory allocated, for other programs
 * @d: Pointer of a new/second dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

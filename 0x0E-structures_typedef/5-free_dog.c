#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -  a function that frees dogs.
 * @d: input value
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

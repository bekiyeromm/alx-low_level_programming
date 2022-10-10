#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free struct  dogs
 * @d: pointer to dog
 *
 * Return: nothing
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

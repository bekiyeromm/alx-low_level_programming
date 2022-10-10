#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function to intialize struct variable
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 *Description: this function intializes structur variable of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

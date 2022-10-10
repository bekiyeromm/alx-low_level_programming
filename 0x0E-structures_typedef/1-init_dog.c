#include <stdio.h>
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
	d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*).owner = owner;
}

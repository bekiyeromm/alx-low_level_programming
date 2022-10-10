#include "dog.h"
/**
 * print_dog -prints dogs detail
 * @d: dog tag
 * Description: prints details of dog
 *
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	else if (d->name == NULL || &(*d).age == NULL || d->owner == NULL)
		printf("(nil)");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes dog
 * @d: pointer to dog
 * @name: name of dog
 * @owner: name of owner
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

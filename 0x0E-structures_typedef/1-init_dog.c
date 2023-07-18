#include <stdlb.h>
include "dog.h"

/**
 * init_dog - initializes a variable of a type struct dog
 * @d: pointer to struct dog to intialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}


#include "dog.h"

/**
 * init_dog - initialize members of struct in header file dog_h
 * @d: pointer to the struct
 * @name: variable to hold the name of the object
 * @age: variable to hold the age of the object
 * @owner: Variable to hold the name of the owner of the object
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

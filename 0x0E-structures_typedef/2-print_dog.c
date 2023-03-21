#include "stdio.h"
#include "stdlib.h"
#include "dog.h"

/**
 * print_dog - displays all the details about the dog
 * @d: struct object dog inside file dog_h
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

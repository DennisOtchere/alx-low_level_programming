#include "stdlib.h"
#include "dog.h"

/**
 * dog_t *new_dog - A new object of type dog inheriting member types
 *		    of the first dog
 * @name: Name of the new object
 * @age: Age of the new object
 * @owner: Owner of the object
 * Return: Pointer new instences of object dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dogs;
	int i, lnName, lnOwner;

	if ((name == NULL) || (owner == NULL))
		return (NULL);

	_dogs = malloc(sizeof(dog_t));

	if (!(_dogs))
		return (NULL);

	for (lnName = 0; name[lnName]; lnName++)
		;
	_dogs->name = malloc(sizeof(char) * (lnName++));
	if (!(_dogs->name))
	{
		free(_dogs);
		return (NULL);
	}

	for (i = 0; i < lnName; i++)
		_dogs->name[i] = name[i];

	_dogs->age = age;

	for (lnOwner = 0; owner[lnOwner]; lnOwner++)
		;

	_dogs->owner = malloc(sizeof(char) * (lnOwner++));
	if (!(_dogs->owner))
	{
		free(_dogs->name);
		free(_dogs);
		return (NULL);
	}

	for (i = 0; i < lnOwner; i++)
		_dogs->owner[i] = owner[i];

	return (_dogs);
}

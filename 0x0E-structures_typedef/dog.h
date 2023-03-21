#ifndef DOG_H
#define DOG_H

/**
 * struct dog -  this creates an object of type dog
 * @name: the name of the object
 * @age: the age of the object
 * @owner: the owner of the object
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/** functions prototyping*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef struct dog
 */
typedef struct dog dog_t;

/** function prototyping continues*/
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif


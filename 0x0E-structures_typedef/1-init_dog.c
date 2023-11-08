#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog
 * @name: Pointer to a string for the name
 * @age: Age of the dog
 * @owner: Pointer to a string for the owner's name
 *
 * Return: None
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


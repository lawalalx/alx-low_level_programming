#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with name, age, and owner.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_H */


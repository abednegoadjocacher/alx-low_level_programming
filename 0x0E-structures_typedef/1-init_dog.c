#include "dog.h"
#include <stdio.h>
/**
 * init_dog -A function that initialize a variable of type struct dog
 * @d: A pointer to dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner name
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

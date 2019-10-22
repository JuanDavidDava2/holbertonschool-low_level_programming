#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog -  name, age, owner.
 * @d: the struct of the dog.
 * @name: name
 * @age: age
 * @owner: owner
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

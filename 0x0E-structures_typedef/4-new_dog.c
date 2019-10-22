#include "dog.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int size_name, size_owner, i;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	for (size_name = 0; name[size_name] != '\0'; size_name++)
		;
	for (size_owner = 0; owner[size_owner] != '\0'; size_owner++)
		;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(size_name + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = name[i];
	ndog->owner = malloc(size_owner + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = owner[i];
	ndog->age = age;
	return (ndog);
}

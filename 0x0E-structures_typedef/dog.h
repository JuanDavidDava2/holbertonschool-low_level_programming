#ifndef dogh
#define dogh
#include<stdio.h>
#include<stlib.h>
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

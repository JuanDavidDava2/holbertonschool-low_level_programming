#ifndef dogh
#define dogh
/**
 * struct dog - struct dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

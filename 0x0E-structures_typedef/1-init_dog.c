#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - it initializes a variable of type struct dog
 * @d: a pointer to struct dog
 * @name: the name of dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

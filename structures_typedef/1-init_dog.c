#include <stdio.h>
#include "dog.h"
/**
 * init_dog - check the code
 * @d: first element
 * @name: second element
 * @age: third element
 * @owner: fourth elements
 *
 * Description: transcribe the content into another struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

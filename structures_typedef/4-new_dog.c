#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/* copy_string function prototype*/
char *copy_string(char *str);

/**
 * new_dog - Creates a new dog
 * @name: name for the new dog struct type dog_t
 * @age: age for the new dog struct type dog_t
 * @owner: owner for the new dog struct type dog_t
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = copy_string(name);
	new_dog->owner = copy_string(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	return (new_dog);
}

/**
 * copy_string - Copy and allocate memory for string that receives as parameter
 * @str: String pass as parameter
 * Return: copy
 */

char *copy_string(char *str)
{
	int length = 0;
	char *copy;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
	{
		length++;

	}

	copy = malloc(length + 1);
	if (copy == NULL)
		return (NULL);

	while (i < length)
	{
		copy[i] = str[i];
		i++;
	}

	copy[length] = '\0';
	return (copy);
}

#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 *
 * @name: name index to be copied to new dog
 *
 * @age: age index to be copied to new dog
 *
 * @owner: owner index to be copied to new dog
 *
 * Return: returns copy of new dog of data-type (dog_t)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->owner = owner;
	d->age = age;

	return (d);
}

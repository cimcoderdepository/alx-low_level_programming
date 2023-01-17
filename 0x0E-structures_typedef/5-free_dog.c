#include "dog.h"

void free_dog(dog_t *d)
{
	/* d = (dog_t *)malloc(sizeof(dog_t));*/

	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);
	
	free(d);
}

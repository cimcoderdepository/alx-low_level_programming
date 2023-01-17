#include <stdio.h>
#include "dog.h"

/*#define struct dog*/

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	/*(*d).name;
	(*d).age;
	(*d).owner;*/

	if (d == NULL)
	{
		if (d->name == NULL)
			printf("nil");
	
		printf("nil");
	}
}

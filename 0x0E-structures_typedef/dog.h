#ifndef dog_h
#define dog_h
/**
 * struct dog - a new type "struct dog" with the following elements:
 * @name: name input
 * @age: age input
 * @owner: owner input
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif

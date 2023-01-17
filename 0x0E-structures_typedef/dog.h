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

typedef struct dog dog_t;


#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

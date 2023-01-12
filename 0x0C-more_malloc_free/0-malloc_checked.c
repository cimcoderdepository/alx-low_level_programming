#include "main.h"
#include <string.h>
/**
 * malloc_checked - void pointer
 * @b: number of elements to determine memory allocation
 * Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	/*ptr = malloc(sizeof(char) * b);
	ptr = malloc(sizeof(float) * b);
	ptr = malloc(sizeof(double) * b);*/


	if (ptr == NULL)
		exit(98);

	return (ptr);
}

#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: a name input to pass into function pointer [void (*f)(char *)].
 * @f: a function pointer that will receive [name] input.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)		/* A name is already given from main.c file.*/
		f(name);	/* Our job now is to connect [name] to [f] */
}

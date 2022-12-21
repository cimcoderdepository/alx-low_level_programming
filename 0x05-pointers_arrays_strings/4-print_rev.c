#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: character to be printed
*/

void print_rev(char *s)
{
	int i, length = 0;

	while (*s != '\0')
	{
		s++;
		length++;

	}
		/* s = s - 1; */

	for (i = 0; i <= length; i++)
	{

		_putchar(*--s);
	}
	_putchar('\n');
}

#include <stddef.h>
#include "main.h"
#include <string.h>

/**
* binary_to_uint - a function that converts a binary number to an unsigned int.
* @b: is pointing to a string of 0 and 1 chars
* Return: return an unsignedint
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length, i;

	if (b == NULL)
		return (0);

	length = strlen(b);
	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}


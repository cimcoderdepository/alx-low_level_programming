#include "main.h"
/**
 * set_bit -  a function that set the value of a bit to 1 at a given index.
 * @n: is the input number to be evaluated
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: 1 if it worked, or -1 if an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}


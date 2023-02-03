#include "main.h"
/**
 * get_bit -  a function that returns the value of a bit at a given index.
 * @n: is the input number to be evaluated
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);  /* Check if index is valid */

	return ((n & (1UL << index)) != 0); /* Return the value of the bit at index */
}


#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array to be examined.
 * @size: is the number of elements in the array.
 * @cmp: is a pointer to the function to be used to compare values
 * Return: return -1 if element matches an integer.
 *
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array && size && cmp)
	{
		for (; index < size; index++)
		{
			if (cmp(array[index]) == 1)
				return (index);
		}
	}
	return (-1);

	if (size <= 0)
		return (-1);
}

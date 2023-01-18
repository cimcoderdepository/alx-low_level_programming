#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 *
 * @array: an array of integer of given inputs.
 *
 * @size: element count that make up the array
 *
 * @action: a function pointer, that takes in [array], [size] as parameters.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	if (array && size && action)	/* this line validates {array, size, action} */
					/* are not empty */
	{
		for (index < size;)	/* we use [for-loop] here to condition the */
					/* behaviour of array for as long as the indexing */
					/* is always less than the array elements... */
		{
			action(array[index]);	/* while radar is at index position, you */
						/* tell program to assign a value for that*/
						/* that position... */

			index++;	/* radar will keep incrementing to +1 index and repeat */
					/* action until array size (elements) reach desired number */
		}
	}
}

#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function to perform the
 * operation asked by the user.
 * @s: is the operator passed as argument to the program
 * Return: returns a pointer to the function that corresponds to the operator
 * given as a parameter.
*/

int (*get_op_func(char *s))(int, int)
{
/* below is the expansion of the array [ops] of */
/* data-type [op_t] into its 6 elements */
	op_t ops[] = {
		{"+", op_add},	/* ops[0], ==> element 1 */
		{"-", op_sub},	/* ops[1], ==> element 2 */
		{"*", op_mul},	/* ops[2], ==> element 3 */
		{"/", op_div},	/* ops[3], ==> element 4 */
		{"%", op_mod},	/* ops[4], ==> element 5 */
		{NULL, NULL}	/* ops[5], ==> element 6 */
	};
	int i = 0;	/* we declare variable for looping through the array */
/* into each index initialize the counter to run through the loop */

	while (i < 5)	/* while counter is set to run through index holding */
/* ONLY valid byte (for which the NULL byte is not considered a valid byte) */
	{
		if (*(ops[i].op) == *s)	/* where we equate ops[i] to the */
/* dereference value of s (+,-,*,/,%). In this case, 's' is the operator */
/*  passed as argument to the program */

			return (ops[i].f);	/* when the [if statement] is */
/* true, let program return pointer to the function that placehold (s) value */
		i++;
	}
	return (NULL);	/* break out of [while loop] if (s) does not match */
/* any of the 5 expected operators (+, -, *, /, %) */
}

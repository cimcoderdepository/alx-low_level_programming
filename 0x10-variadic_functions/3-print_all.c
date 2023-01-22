#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - a function to print a character.
 * @arg: a character input passed
*/
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
* print_int - a function to print an integer.
* @arg: an integer input passed
*/
void print_int(va_list arg)
{
	 printf("%i", va_arg(arg, int));
}
/**
* print_float - a function to print a float.
* @arg: a float input passed
*/
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
* print_str - a function to print a string.
* @arg: a string input passed
*/
void print_str(va_list arg)
{
	char *string = va_arg(arg, char *);	/* we create a buffer...*/
	/*...(a.k.a container) called [string] to hold [va_arg(arg, char *)] */

	if (!string)	 /* if the string is NULL */
		printf("(nil)");

	printf("%s", string);	/* if string is contains something...*/
				/*...Meaning it is NOT NULL (empty) */
}

/**
* print_all - a function that prints anything.
* @format: where format is a list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list uduak;
	int i = 0, j;	/* [i] to be looping through "ceis" in the...*/
			/*...main file. see (3-main.c) file for more info */
	char *separator = "";

	prt format_funcs[] = {	/* [j] to be looping through the structure */
	/*[ptr format_funcs[]. we initailize "ceis" array to access its index */

		{'c', print_char},	/* format_funcs[j][0] - 0th index */
		{'i', print_int},	/* format_funcs[j][1] - 1st index */
		{'f', print_float},	/* format_funcs[j][2] - 2nd index */
		{'s', print_str}	/* format_funcs[j][3] - 3rd index */
	};

	va_start(uduak, format);


	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == format_funcs[j].symbol)
			{
				printf("%s", separator);
				format_funcs[j].print(uduak);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(uduak);
}

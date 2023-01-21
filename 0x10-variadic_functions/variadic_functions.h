#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdarg.h>
#include <stdio.h>
/**
 * struct print_format - a struct to combine known data types
 * @symbol: a array of character
 * @print: a function pointer.
 * prt - typedef for struct print_format.
 */
typedef struct print_format
{
	char symbol;
	void (*print)(va_list arg);
} prt;

	/* for the above typedef, we have to */
	/*...create functions for char, integer, */
	/*...float, char *; and put their prototype */
	/*...in our  header file */

/**
 * print_char - a function to print a character.
 * @arg: a character input passed
*/
void print_char(va_list arg);
/**
* print_int - a function to print an integer.
* @arg: an integer input passed
*/
void print_int(va_list arg);
/**
* print_float - a function to print a float.
* @arg: a float input passed
*/
void print_float(va_list arg);
/**
* print_str - a function to print a string.
* @arg: a string input passed
*/
void print_str(va_list arg);	/*...in our  header file */



int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

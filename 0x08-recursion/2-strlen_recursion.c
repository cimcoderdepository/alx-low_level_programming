#include "main.h"
/**
 *  _strlen_recursion - s function that returns the length of a string
 * @s: An input string to print
 * Return: returns the length of the string
 */
int _strlen_recursion(char *s)
{

	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

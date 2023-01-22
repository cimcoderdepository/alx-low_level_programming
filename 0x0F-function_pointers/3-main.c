#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that performs simple operations.
 * @argc: command-line argument count
 * @argv: command-line list of arguments
 * Return: return the result of the operation.
*/

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if (*argv[2] == '/' || *argv[2] == '%')
	{
			if (num2 == 0)
			{
				printf("Error\n");
				exit(100);
			}
	}
	printf("%d\n", (get_op_func)(argv[2])(num1, num2));
	return (0);
}

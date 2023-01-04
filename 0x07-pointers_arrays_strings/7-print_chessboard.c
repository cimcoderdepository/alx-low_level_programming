#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: an array of chess boxes per row, per columns
 */
void print_chessboard(char (*a)[8])
{

	int i = 0, j;


	for (; i < 8; i++)
	{
		j = 0;

		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

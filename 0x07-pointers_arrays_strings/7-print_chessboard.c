#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: chessboard
 */

void print_chessboard(char (*a)[8])
{

	int i, j;

	for (i = 0; a[i] && i < 8; i++)
		for (j = 0; a[j] && j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}

}

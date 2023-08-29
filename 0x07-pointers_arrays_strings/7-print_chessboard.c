#include "main.h"
/**
* print_chessboard - prints the chessboard.
* @a: array
* Return: Always 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
	int w;
	int b;

	for (w = 0; w < 8; w++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[w][b]);
		_putchar('\n');
	}
}

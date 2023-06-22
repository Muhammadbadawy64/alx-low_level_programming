#include "main.h"

/**
 * print_square - prints a square using the character '#'
 * @size: the size of the square
 *
 * Description:
 * This function prints a square made of '#' characters.
 * If the given value of size is 0 or less, it prints only a newline character.
 * Otherwise, it prints 'size' number of '#'
 * characters for each row and column.
 *
 * Return: void
 */

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}

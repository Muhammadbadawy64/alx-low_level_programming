#include "main.h"

/**
 * print_square - prints a square using '#' character
 * @size: the size of the square
 *
 * Description:
 * This function prints a square made of '#' characters.
 * If the given value of size is 0 or less, it prints only a newline character.
 * Otherwise, it prints 'size' number
 * of '#' characters for each row and column.
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}

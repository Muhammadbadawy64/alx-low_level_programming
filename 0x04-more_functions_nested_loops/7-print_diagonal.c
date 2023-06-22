#include "main.h"

/**
 * print_diagonal - prints a diagonal line using '\' character
 * @n: the number of times the '\' character should be printed
 *
 * Description:
 * This function prints a diagonal line composed of '\' characters.
 * If the given value of n is less than
 * or equal to 0, it prints a newline character.
 * Otherwise, it prints a line with increasing number
 * of spaces followed by a '\' character.
 * The number of spaces is determined by the current position in the diagonal.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}


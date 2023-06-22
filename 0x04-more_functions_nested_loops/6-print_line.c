#include "main.h"

/**
 * print_line - prints a straight line composed of '_' characters
 *
 * @n: the number of times the '_' character should be printed
 *
 * Description:
 * This function prints a straight line composed of '_' characters.
 * If the given value of n is less than
 * or equal to 0, it prints a newline character.
 * Otherwise, it prints the specified
 * number of '_' characters followed by a newline.
 *
 * Return: void
 */

void print_line(int n)
{
	int inChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (inChr = 1; inChr <= n; inChr++)
			_putchar('_');
		_putchar('\n');
	}
}

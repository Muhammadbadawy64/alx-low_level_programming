#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, excluding 2 and 4,
 * using _putchar function only twice
 *
 * Description:
 * This function loops through the numbers from 0 to 9 and prints each
 * number using the _putchar function, except for the numbers 2 and 4.
 * The numbers are printed as ASCII characters by
 * adding 48 to their numeric value.
 *
 * Return: void
 */

void print_numbers(void)
{
	int num;

	for  (num = 0 ; num <= 9; num++)
	{

	if
		(num == 2 || num == 4);
		continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}

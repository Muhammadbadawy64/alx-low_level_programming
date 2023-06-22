#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, ten times,
 * using _putchar function only three times
 *
 * Description:
 * This function prints numbers from 0 to 14 in a pattern, ten times.
 * It uses the _putchar function to print the numbers and ensures that
 * numbers greater than 9 are printed correctly by handling the tens place
 * and ones place separately. The numbers are printed as ASCII characters
 * by adding 48 to their numeric value.
 *
 * Return: void
 */

void more_numbers(void)
{
	int num, row, count;

	for  (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}

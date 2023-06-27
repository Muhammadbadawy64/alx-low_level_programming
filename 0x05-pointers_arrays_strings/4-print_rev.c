#include "main.h"

/**
* print_rev - prints a reversed string, followed by a new line
* @s: pointer to the string to print
*
* This function takes a pointer to a string and prints it in reverse order,
* followed by a new line character. The string is reversed by iterating
* through its characters in reverse order and printing them using _putchar.
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

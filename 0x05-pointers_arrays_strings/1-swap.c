#include "main.h"

/**
* swap_int - swapes the values of two integars
*           using two parameters
*
* @a: input parameter 1
* @b: input parameter 2
*
* Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

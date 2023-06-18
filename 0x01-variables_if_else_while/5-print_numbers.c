#include <stdio.h>

/**
* main - entry point
*
* Description : print all single digit numbers
*
* Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}

	putchar('\n');

	return (0);
}

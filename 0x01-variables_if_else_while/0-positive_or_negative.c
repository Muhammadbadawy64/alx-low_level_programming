#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Determine if a random number is positive, negative or zero.
*
* Return: 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	printf("%i is positive %s\n", n);
	else if (n == 0)
		printf("%i is zero %s\n", n);
	else
		printf("%i is negative %s\n", n);
	return (0);
}



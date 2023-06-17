#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program generates a random number and prints the last digit along with
 * a corresponding message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	srand(time(NULL));  /* Initialize random seed */

	int n = rand();  /* Generate random number */

	printf("The string Last digit of %d is ", n);

	int lastDigit = n % 10;  /* Get the last digit of n */

	if (lastDigit > 5)
	{
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("%d and is 0\n", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}

	return (0);
}

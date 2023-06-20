#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		if (count != 49)
			printf(", ");
		else
			printf("\n");
		fib1 = fib2;
		fib2 = sum;
	}

	return (0);
}


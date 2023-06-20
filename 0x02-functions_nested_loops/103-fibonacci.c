#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the sum of even-valued terms
 *              in the Fibonacci sequence up to 4,000,000.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, sum;
	unsigned long total_sum = 0;

	if (fib1 % 2 == 0)
		total_sum += fib1;
	if (fib2 % 2 == 0)
		total_sum += fib2;
	while (fib2 <= 4000000)
	{
		sum = fib1 + fib2;
		if (sum % 2 == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0ld\n", total_sum);
	return (0);
}

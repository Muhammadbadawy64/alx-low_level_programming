#include <stdio.h>
/**
 * main - print numbers 1 - 100 followed by new line
 *      numbers that are multiples of 3 print fizz
 *      numbers that are multiples of 5 print Buzz
 *      numbers that are multiples of 3 and 5 print FizzBuzz
 *       each number and word ro be separated by space
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}

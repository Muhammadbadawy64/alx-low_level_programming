#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the first 98 Fibonacci numbers.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, fib3;
    int count;

    printf("%lu, %lu", fib1, fib2);

    for (count = 3; count <= 98; count++)
    {
        fib3 = fib1 + fib2;
        printf(", %lu", fib3);

        // Update values for next iteration
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return (0);
}


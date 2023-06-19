#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a quote using the write function
 *
 * Return: 1 (error).
 */
int main(void)
{
        char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

        write(2, quo, 59);

        return (1);
}


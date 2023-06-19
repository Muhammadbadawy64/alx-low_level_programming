#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of two digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    int digit1 = 0, digit2, digit3, digit4;

    while (digit1 <= 9)
    {
        digit2 = 0;
        while (digit2 <= 9)
        {
            digit3 = 0;
            while (digit3 <= 9)
            {
                digit4 = 0;
                while (digit4 <= 9)
                {
                    if (digit1 != digit2 && digit1 != digit3 && digit1 != digit4 &&
                        digit2 != digit3 && digit2 != digit4 && digit3 != digit4 &&
                        digit1 < digit2 && digit2 < digit3 && digit3 < digit4)
                    {
                        putchar(digit1 + '0');
                        putchar(digit2 + '0');
                        putchar(digit3 + '0');
                        putchar(digit4 + '0');
                        if (!(digit1 == 9 && digit2 == 8 && digit3 == 9 && digit4 == 9))
                        {
                            putchar(',');
                            putchar(' ');
                        }
                    }
                    digit4++;
                }
                digit3++;
            }
            digit2++;
        }
        digit1++;
    }
    putchar('\n');

    return (0);
}


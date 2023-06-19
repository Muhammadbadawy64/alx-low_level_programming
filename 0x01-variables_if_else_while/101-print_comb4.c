#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of two digits.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int digit1 = 0;
    int digit2;
    int digit3;

    while (digit1 <= 9)
    {
        digit2 = 0;
        while (digit2 <= 9)
        {
            digit3 = 0;
            while (digit3 <= 9)
            {
                if (digit1 != digit2 && digit1 < digit2 && digit2 != digit3 && digit2 < digit3)
                {
                    printf("%d%d%d", digit1, digit2, digit3);
                    if (digit1 != 7 || digit2 != 8 || digit3 != 9)
                        printf(", ");
                }
                digit3++;
            }
            digit2++;
        }
        digit1++;
    }
    printf("\n");

    return (0);
}


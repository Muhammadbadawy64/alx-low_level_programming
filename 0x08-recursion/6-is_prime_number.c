#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is a prime number
 * @n: The number to be checked
 * Return: 1 if the number is prime, 0 otherwise
 */
int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number
 * is prime by dividing it with numbers less than itself
 * @n: The number to be checked
 * @othrn: The current number being tested for divisibility with n
 * Return: 1 if the number is prime, 0 otherwise
 */
int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}

#include "main.h"

/**
 * last_index - returns the last index of a string {counts the null char}
 * @s: pointer to the string
 * Return: integer representing the last index
 */
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome
 * @s: string to check
 * @start: index moving from right to left
 * @end: index moving from left to right
 * @mod: 1 if string length is odd, 0 if even
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}

#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - find the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *m;

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc((size1 + size2) + 1);

	if (m == 0)
		return (NULL);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
/**
 * main - entry point of the program
 * Return: 0 on success
 */
int main(void)
{
	char *result = str_concat("Hello", NULL);

	if (result != NULL)
		printf("%s\n", result);
	free(result);

	result = str_concat(NULL, "Hello");
	if (result != NULL)
		printf("%s\n", result);
	free(result);
	result = str_concat(NULL, NULL);
	if (result != NULL)
		printf("%s\n", result);
	free(result);

	return (0);
}

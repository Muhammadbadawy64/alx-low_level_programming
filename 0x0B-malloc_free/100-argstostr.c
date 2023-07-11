#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int total_len = 0;
	int arg_len;
	int i, j;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		arg_len = 0;
		while (av[i][arg_len] != '\0')
		{
			arg_len++;
			total_len++;
		}
		total_len++; /* Account for newline character */
	}
	/* Allocate memory for the concatenated string */
	str = malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	/* Copy the arguments to the concatenated string */
	for (i = 0; i < ac; i++)
	{
		arg_len = 0;
		while (av[i][arg_len] != '\0')
		{
			str[k] = av[i][arg_len];
			arg_len++;
			k++;
		}
		str[k] = '\n'; /* Add newline character */
		k++;
	}
	str[k] = '\0'; /* Add null terminator */
	return (str);
}

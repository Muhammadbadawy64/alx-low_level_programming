#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - it all starts here
 * @argc: the number of argumets.
 * @argv: array of pointers to argumets
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

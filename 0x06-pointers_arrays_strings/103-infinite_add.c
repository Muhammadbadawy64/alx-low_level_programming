#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result length
 * Return: sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i >= size_r || j >= size_r)
		/*Check if sum exceeds result size*/
		return (0);
	if (i > j)
		l = i;
	else
		l = j;
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - '0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		if (l + 1 >= size_r)
			/*Check if carry bit exceeds result size*/
			return (0);
		for (k = l; k >= 0; k--)
			r[k + 1] = r[k];
		r[0] = d + '0';
	}
	return (r);
}

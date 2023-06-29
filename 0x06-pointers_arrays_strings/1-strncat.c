#include "main.h"

/**
 * _strncat - a function  that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;
	/**
	 * src does not need to be null terminated
	 * if it contain n or more bytes
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + 1] = src[i];
	/*null terminate dest*/
	dest[c + i] = '\0';

	return (dest);
}

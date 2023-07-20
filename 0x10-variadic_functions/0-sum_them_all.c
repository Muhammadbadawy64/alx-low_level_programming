#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums variable arguments.
 * @n: The number of arguments.
 * @...: The integers to sum.
 *
 * Return: The integer sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);

	va_start(ap, n); /* Initialize the va_list with
			    n as the last named argument */
	while (i--)
		s += va_arg(ap, int); /* Access the next argument of
					 type int and add it to the sum */
	va_end(ap); /* Clean up the va_list */
	return (s);
}


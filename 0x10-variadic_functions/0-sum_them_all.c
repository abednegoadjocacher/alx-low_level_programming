#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its paramters pass to it
 * @n: The number of paramters passed to the function
 * @...: The unknown variable to be calculated
 * Return: 0
 * Otherwise - the sum of all parameters.
 */
	int sum_them_all(const unsigned int n, ...)
	{
		unsigned int j, sum = 0;
		va_list add;

		va_start(add, n);
		for (j = 0; j < n; j++)
		{
			if (n == 0)
			{
			return (0);
			}
			else
			{
			sum += va_arg(add, const unsigned int);
			}
		}
		va_end(add);
		return (sum);
	}

#include "variadic_functions.h"
/**
 * sum_them_all -prints the sum of all arguments
 * @n: number of argument counter
 * Return: the sum of all the argjuments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, result = 0;
	va_list st;/* st stores variable num of arguments*/

	va_start(st, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
			result = result + va_arg(st, int);
		va_end(st);
		return (result);
	}
}

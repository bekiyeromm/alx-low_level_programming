#include "variadic_functions.h"
/**
 * print_strings -prints string
 * @separator:the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: return nothing
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < (n - 1))
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

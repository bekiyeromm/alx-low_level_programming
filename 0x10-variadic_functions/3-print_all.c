#include "variadic_functions.h"
/**
 * print_all -prints any thing
 *
 * @format: is a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	size_t i = 0 ,j = 0, k;
	char *str;
	va_list ap;
	const char txt[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		k = 0;
		while (txt[k])
		{
			if (format[i] == txt[k] && j)
			{
				printf(", ");
				break;
			}
			k++;
		}
		switch(format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), j = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), j = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), j = 1;
				break;
			case 's':
				str = va_arg(ap, char *), j = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

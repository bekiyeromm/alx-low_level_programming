#include "function_pointers.h"

/**
 * print_name -function to print
 * name
 *
 * @name: name(input)
 * @f: pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		(*f)(name);
	}
}

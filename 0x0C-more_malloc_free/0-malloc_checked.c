#include "main.h"
/**
 * malloc_checked -fun to allocae mem
 *
 * @b: integer size of mem
 * Return: return pointer to allacated memory
 * if maloc fails terminate process with exit code 98
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}

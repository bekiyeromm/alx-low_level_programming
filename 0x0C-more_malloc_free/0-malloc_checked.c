#include "main.h"
/**
 * malloc_checked -fun
 *
 * @b: integer
 *
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}

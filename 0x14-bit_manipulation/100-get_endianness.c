#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
unsigned int i = 1;
char *str = (char *) &i;

if (*str)
return (1);
else
return (0);
}

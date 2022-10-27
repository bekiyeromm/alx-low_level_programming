#include "main.h"
#include <string.h>
/**
 * binary_to_uint -convets binary to uint
 * @b: pointer to string of 1 and 0,
 * of type char
 * Return: uint nuber
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i = 0, uint = 1;
	int c;

	len = strlen(b);
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += uint;
		}
		uint *= 2;
	}
	return (i);
}

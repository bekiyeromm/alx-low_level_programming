#include "main.h"
/**
 * _memset -function to fill
 * @s: address pointed by s to be fill
 * @b: constant value
 * @n: no of byte to be fill
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

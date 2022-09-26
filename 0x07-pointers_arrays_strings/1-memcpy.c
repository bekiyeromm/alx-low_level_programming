#include "main.h"
/**
 * _memcpy -function that copies from src to dest
 * @dest:copied value will store here
 * @src: values copied from src
 * @n: opies n bytes from memory area src to memory area dest
 * Return: return dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, s;

	s = n;
	if (s > 0)
	{
	for (i = 0; i < s; i++)
	{
		dest[i] = src[i];
	}
	}
	return (dest);
}

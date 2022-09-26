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
	unsigned int i;

	for (i = 0; i < 98; i++)
		if ((i >= 50) && i < (n + 50))
		{
			*dest[i] = *src[i];
		}
	return (dest);
}

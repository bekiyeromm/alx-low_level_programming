#include "main.h"
/**
 * _calloc -function to allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size in byte.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

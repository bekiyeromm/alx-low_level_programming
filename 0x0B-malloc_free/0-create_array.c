#include "main.h"
/**
 * create_array -creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of characters
 * @c: character to be intiallized
 *
 * Return: returns NULL if size is 0
 * or the array is NULL else return the array a
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	a = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);

}

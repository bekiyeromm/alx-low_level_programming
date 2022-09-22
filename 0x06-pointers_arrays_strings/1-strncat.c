#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _strncat -concatenate two string with size n
 *
 * @dest: destination string
 * @src: source string
 * Return: returns destinatin string
 * @n: number of byte taken from src
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}

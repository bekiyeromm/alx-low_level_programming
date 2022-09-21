#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _strcat -concatenate two string
 *
 * @dest: destination string
 * @src: source string
 * Return: returns destinatin string
 */
char *_strcat(char *dest, char *src)
{
	int l1, l2, i;

	l1 = strlen(dest);
	l2 = strlen(src);
	for (i = 0; i <= l2; i++)
	{
		dest[l1 + i] = src[i];
	}
	return (*dest);
}

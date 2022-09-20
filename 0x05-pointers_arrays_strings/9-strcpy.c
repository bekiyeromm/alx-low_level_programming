#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * *strcpy -copy
 * @dest: destination
 * @src: source
 * Return: always true
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	for (i = 0; i <= strlen(src); i++)
	{
		if (*(str + i) != '\0')
		dest[i] = src[i];
		return (dest);
	}
}

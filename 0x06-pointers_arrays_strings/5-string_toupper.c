#include<stdio.h>
#include "main.h"
/**
 * string_toupper -converts small letter to upper case letters
 *  : string to be converted
 * Return: return str1
 *
 */
char *string_toupper(char *)
{
	char str1[50];

	int i;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
			str1[i] = str1[i] - 32;
	}
	return (str1);
}

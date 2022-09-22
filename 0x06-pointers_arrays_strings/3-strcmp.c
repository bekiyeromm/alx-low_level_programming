#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _strcmp -concatenate two string
 * @s1: destination string
 * @s2: source string
 * Return: returns 0 if equal -ve if not
 */
int _strcmp(char *s1, char *s2)
{
	int i, flag;

	for (i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++)
	{
		flag = *(s1 + i) - *(s2 + i);
	}
	return (flag);
}

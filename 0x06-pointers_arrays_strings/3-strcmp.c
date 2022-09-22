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
	int i = 0, flag = 0;

	while (flag == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		flag = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (flag);
}

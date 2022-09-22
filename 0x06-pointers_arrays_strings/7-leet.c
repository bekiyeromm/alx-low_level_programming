#include<stdio.h>
#include "main.h"
/**
 * leet -fuction
 *
 * @str: string
 * Return: return string str
 */
char *leet(char *str)
{
	char str1[20] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	char str2[20] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str[i] == str1[j])
				str[i] = str2[j];
		}
	}
	return (str);
}

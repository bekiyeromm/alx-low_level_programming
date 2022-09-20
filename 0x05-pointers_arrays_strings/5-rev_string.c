#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: l
 *
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (l);
}
/**
 * rev_string -rev
 *
 * @s: string s
 */
void rev_string(char *s)
{
	int i = 0;

	int j = (_strlen(s) - 1);

	char c;

	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}

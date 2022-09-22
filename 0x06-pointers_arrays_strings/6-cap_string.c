#include<stdio.h>
#include "main.h"
/**
 * cap_string -capitalize each word of a string
 *
 * @str: parameter
 * Return: return capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (s[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i] == ' ' || str[i] == ',' ||
str[i] == '"' || str[i] == '{'
|| str[i] == '\n' || str[i] == ' ' || str[i] == '\t'
|| str[i] == '}' || str[i] == ')' || str[i] == '.' || str[i] == '(' ||
str[i] == '?' || str[i] == '!' || str[i] == ';'))
			str[i] = str[i] - 32;
			i++;
	}
	return (str);
}

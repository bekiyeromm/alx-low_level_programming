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
		/*str[i] = str[i] - 32;*/
		s[i] = s[i] - 'a' + 'A';
	i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i] == ' ' || str[i] == ',' ||
str[i] == '"' || str[i] == '{'
|| str[i] == '\n' || str[i] == ' ' || str[i] == '\t'
|| str[i] == '}' || str[i] == ')' || str[i] == '.' || str[i] == '(' ||
str[i] == '?' || str[i] == '!' || str[i] == ';'))
			/*str[i] = str[i] - 32;*/
			s[i] = s[i] - 'a' + 'A';
			i++;
	}
	return (str);
}
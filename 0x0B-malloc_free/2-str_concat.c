#include "main.h"
/**
 * str_concat -concatenate string s1 and s2
 * @s1: string 1
 * @s2: string 2
 *
 * Return: return concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1 = strlen(s1), len2 = strlen(s2);
	char *concat_string;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	concat_string = malloc(sizeof(char) * (len1 + len2));
	for (i = 0; s1[i]; i++)
		concat_string[i] = s1[i];
	for (i = 0; s2[i]; i++)
		concat_string[i++ + len1] = s2[i];
	return (concat_string);
}

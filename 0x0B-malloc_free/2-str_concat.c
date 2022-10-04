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
	int i, j = 0, len = 0;
	char *concat_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_string = malloc(sizeof(char) * len);
	if (concat_string == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat_string[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_string[j++] = s2[i];
	return (concat_string);
}

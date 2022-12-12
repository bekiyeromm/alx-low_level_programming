#include "main.h"
/**
 * _strchr -returns first occurance of c
 *
 * @s: char c is searched from
 *
 * @c: character to be searched
 * Return: returns c
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
		if (*s == c)
			return (s);
		else if (!*s)
			return (NULL);
	return (NULL);
}

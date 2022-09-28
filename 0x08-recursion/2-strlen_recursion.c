#include "main.h"
/**
 * _puts_recursion -writes a string followed by new line
 * 
 * @s: string to be written
 *
 */
int _strlen_recursion(char *s)
{
	int c;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	c = 1 +	_strlen_recursion(s + 1);
	}
	return (c);
}

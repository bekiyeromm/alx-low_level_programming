#include "main.h"
/**
 * _puts_recursion -writes a string followed by new line
 * @s: string to be written
 *
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}

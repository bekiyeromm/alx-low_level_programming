#include<stdio.h>
#include "main.h"
/**
 * _isdigit -main entry
 *
 * @c: parameter
 * Return: always  1 if c is digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

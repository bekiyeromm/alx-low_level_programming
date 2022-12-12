#include<stdio.h>
#include "main.h"
/**
 * _islower -print lowercase char
 * @c: single parameter
 *
 * Description: print lower
 * Return: always one if true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

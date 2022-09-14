#include<stdio.h>
#include "main.h"
/**
 * _abs -print absolute value of number
 * @n: parameter
 * Return: always 0
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-(n));	
	return (0);

}

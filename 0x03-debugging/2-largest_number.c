#include<stdio.h>
#include "main.h"
/**
 * largest_number -find max
 * @a: param 1
 * @b: param2
 * @c: param3
 * Return: always 0
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}

#include "main.h"

/**
* sqrt_check - Checks for the square root of c
*
* @a: sqrt gues
*
* @b: Number to be calculated
*
* Return: returns -1 or sqrt root of b
*/

int sqrcheck(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrcheck(a + 1, b));
}

/**
* _sqrt_recursion - Returns square of a number n
*
* @n: a number to calculate their square
*
* Return: returns square root of n or -1
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrcheck(1, n));
}

#include "main.h"
/**
 * _pow_recursion -prints x the power of y
 *
 * @x: base
 *
 * @y: power
 * Return: returns value of x the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		/*return (_pow_recursion(x, y + 1) / x);*/
		return (-1);
	}
	return (_pow_recursion(x, y - 1) * x);
}

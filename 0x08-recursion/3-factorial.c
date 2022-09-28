#include "main.h"
/**
 * factorial -function to calculate factorials of a number
 *
 * @n: number to be calculated
 *
 * Return: returns factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if(n == 0)
	{
		return (1);
	}
	else 
	{
		return (n * factorial(n - 1));
	}
}

#include "main.h"
/**
* prime - Checks to see if number is prime
* @a: Factor check
* @b: Possible prime number
*
* Return: 1 if prime, 0 if not
*/
int prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (prime(a + 1, b));
}

/**
* is_prime_number - States if number is prime
*
* @n: Number to check
*
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime(2, n));
}

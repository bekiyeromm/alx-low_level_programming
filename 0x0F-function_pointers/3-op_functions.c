#include "3-calc.h"
/**
 * op_add -adds a and b
 * @a: first num
 * @b: second num
 * Return: return sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub -substract b from a
 * @a: num a
 * @b: num b
 * Return: return (a-b)
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul -multiply a with b
 * @a: num a
 * @b: num b
 * Return: returns a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div -divide a by b
 * @a: num a
 * @b: num b
 * Return: returns a/b if b != 0
 * if b == 0print Error and exit (100)
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod -perform a % b
 * @a: num a
 * @b: num b
 * Return: if b == 0 returns Error
 * with exite (100) else return(a%b)
 *
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

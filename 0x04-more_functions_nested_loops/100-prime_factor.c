#include<stdio.h>
/**
 * main -entry
 * Return: lways zero
 *
 */
int main(void)
{
	unsigned long int i, a = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
	while ((a % i == 0) && (a != i))
	a = a / i;
	}
	printf("%lu\n", a);
	return (0);
}

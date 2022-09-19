#include<stdio.h>
#include "main.h"
/**
 * print_array -function
 *
 * @a: param 1
 * @n: param 2
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
}

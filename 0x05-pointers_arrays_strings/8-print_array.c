#include<stdio.h>
#include "main.h"
/**
 * print_array -function
 *
 * @a: param 1
 * @b: param 2
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", a[i]);
}

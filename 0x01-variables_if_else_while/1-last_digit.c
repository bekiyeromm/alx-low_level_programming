#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 *main -entry of function
 *Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n%10) > 5)
		printf("last digit of %d is %d and is greater than\n", n , (n%10));
	else if ((n%10)==0)
		printf("last digit of %d is %d and is\n", n , (n%10));
	else if (((n%10)<6)&&((n%10)!=0))
		printf("last digit of %d is %d and is less than 6 and not 0\n", n , (n%10));

	return (0);
}

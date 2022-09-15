#include<stdio.h>
/**
 * main -entry
 * Return: lways zero
 *
 */
int main(void)
{
	long a = 612852475143;
	
	int i;
	while (i++ < a / 2)
	{
		if(a % i ==0)
		{
			a / =2;
			continue;
		}
		for (i = 3; i < a / 2; i + = 2)
		{
			if (a % i == 0)
				a / = i;
		}
	}
	printf("%d",a);
}

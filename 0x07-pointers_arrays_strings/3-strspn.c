#include "main.h"
/**
 * _strspn -function to count number of bytes from
 * @s: from s substring accept will be counted
 * @accept: sub string to be searched
 *
 * Return: returns number of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0, i, j, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				flag++;
			}
		}
		if (flag == 0)
		{
			return (c);
		}
	}
	return (0);
}

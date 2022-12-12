#include<stdio.h>
#include "main.h"
/**
 * _isupper -function protitype
 * @c: parameter
 * Return: always 1 if true
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}

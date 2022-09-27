#include "main.h"
#include<stdio.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s: parameter for source adress.
 * @to: parameter to be set 
 */
void set_string(char **s, char *to)
{
	*s = to;
}

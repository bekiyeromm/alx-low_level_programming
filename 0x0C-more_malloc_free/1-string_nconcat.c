#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2
 * @n: number of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, treat as empty.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len1, len2, tlen, i;

	len1 = len2 = tlen = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
		n = len2;

	tlen = len1 + n;

	mem = malloc(tlen + 1);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < tlen; i++)
		if (i < len1)
			mem[i] = s1[i];
		else
			mem[i] = s2[i - len1];

	mem[i] = '\0';

	return (mem);
}

#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @t1: string to append to
 * @t2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *t1, char *t2, unsigned int n)
{
	char *t;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (t1 && t1[len1])
		len1++;
	while (t2 && t2[len2])
		len2++;

	if (n < len2)
		t = malloc(sizeof(char) * (len1 + n + 1));
	else
		t = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!t)
		return (NULL);

	while (i < len1)
	{
		t[i] = t1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		t[i++] = t2[j++];

	while (n >= len2 && i < (len1 + len2))
		t[i++] = t2[j++];

	s[i] = '\0';

	return (t);
}


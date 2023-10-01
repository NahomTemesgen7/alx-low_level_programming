#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @boo: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *boo)
{
	int i;
	unsigned int dec_val = 0;

	if (!boo)
		return (0);

	for (i = 0; boo[i]; i++)
	{
		if (boo[i] < '0' || boo[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (boo[i] - '0');
	}

	return (dec_val);
}

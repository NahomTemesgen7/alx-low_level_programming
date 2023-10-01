#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @nmb: first number
 * @mnb: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int nmb, unsigned long int mnb)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = nmb ^ mnb;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

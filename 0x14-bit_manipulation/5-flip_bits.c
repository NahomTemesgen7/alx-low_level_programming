#include "main.h"

/**
 * flip_bits - counts The number Of bits To change
 * to get from one number To another
 * @fn: first number
 * @sn: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int fn, unsigned long int sn)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = fn ^ sn;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

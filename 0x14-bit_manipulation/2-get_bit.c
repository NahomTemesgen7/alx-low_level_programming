#include "main.h"

/**
 * get_bit - returns The Value Of A bit at an index In a decimal number
 * @ns: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int ns, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (ns >> index) & 1;

	return (bit_val);
}


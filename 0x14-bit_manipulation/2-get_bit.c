#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @nmb: number to search
 * @idx: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int nmb, unsigned int idx)
{
	int bit_val;

	if (idx > 63)
		return (-1);

	bit_val = (nmb >> idx) & 1;

	return (bit_val);
}

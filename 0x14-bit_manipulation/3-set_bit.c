#include "main.h"

/**
 * set_bit - sets A bit at A given index to 1
 * @nc: pointer to The number To change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *nc, unsigned int index)
{
	if (index > 63)
		return (-1);

	*nc = ((1UL << index) | *nc);
	return (1);
}


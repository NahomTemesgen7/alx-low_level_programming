#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @nmb: pointer to the number to change
 * @idx: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *nmb, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	*nmb = ((1UL << idx) | *nmb);
	return (1);
}

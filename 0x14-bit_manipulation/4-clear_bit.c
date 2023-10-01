#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @nmb: pointer to the number to change
 * @idx: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *nmb, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	*nmb = (~(1UL << idx) & *nmb);
	return (1);
}

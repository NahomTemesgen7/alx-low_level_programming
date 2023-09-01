#include "main.h"

/**
 * clear_bit - sets The value Of A given bit to 0
 * @nc: pointer To The number To change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *nc, unsigned int index)
{
	if (index > 63)
		return (-1);

	*nc = (~(1UL << index) & *nc);
	return (1);
}

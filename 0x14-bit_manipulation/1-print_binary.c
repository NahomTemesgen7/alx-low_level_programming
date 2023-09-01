#include "main.h"

/**
 * print_binary - prints The binary Equivalent Of A decimal number
 * @bn: number To print in binary
 */
void print_binary(unsigned long int bn)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = bn >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

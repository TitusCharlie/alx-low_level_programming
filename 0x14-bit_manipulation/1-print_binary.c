#include "main.h"

/**
 *print_binary - this prints the binary representation of a number.
 *@n: binary number ot be printed
 *DO NOT COPY TLC
 */
void print_binary(unsigned long int n)
{
	unsigned long int current;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

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

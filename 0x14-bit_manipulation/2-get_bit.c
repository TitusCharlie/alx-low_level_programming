#include "main.h"

/**
 * get_bit - this returns the value of a bit
 * at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * DO NOT COPY TLC
 * Return: returns value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
	return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

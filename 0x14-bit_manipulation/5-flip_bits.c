#include "main.h"

/**
 * flip_bits - thisproject counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * DO NOT COPY TLC
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int currt;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		currt = exclusive >> i;
		if (currt & 1)
			cnt++;
	}

	return (cnt);
}


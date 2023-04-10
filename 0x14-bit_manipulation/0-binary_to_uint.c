#include "main.h"

/**
 * binary_to_uint - this converts a binary number to unsigned int
 * @b: string containing the binary number
 * DO NOT COPY TLC
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int number;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (number = 0; b[number]; number++)
	{
		if (b[number] < '0' || b[number] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[number] - '0');
	}

	return (decimal_value);
}

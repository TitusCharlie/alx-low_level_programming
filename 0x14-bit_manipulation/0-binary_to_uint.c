#include "main.h"

/**
 * binary_to_uint - function that converts binary to unsigned integer
 * @b: this is the string with binary object
 * DO NOT COPY TLC
 * Return: object converted
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_number = 0;
	int object;

	if (!b)
		return (0);

	for (object = 0; b[object]; object++)
	{
		if (b[object] > '1' || b[object] < '0')
			return (0);
	}
	return (decimal_number);
}

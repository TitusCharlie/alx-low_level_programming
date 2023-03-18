#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - array that prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *address;
	unsigned int position;

	if  (size == 0)
	{
		return (NULL);
	}
	/*Define values with malloc*/
	address = (char *) malloc(size * sizeof(c));
	if  (address == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		while (position < size)/*while for array*/
		{
			*(address + position) = c;
			position++;
		}
		return (address);
	}
}

#include "main.h"
#include <unistd.h>

/**
 * _putchar - this writes the character c
 * DO NOT COPY TLC
 * @c: character to be printed
 * Return: 1 if successful and -1 if error occurs
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>
#include "main.h"


/**
 * swap_int - function that swaps two integers
 * Returns: void
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}

#include <stdio.h>
#include "main.h"
/**
 * main - Print the name of the program
 * @argv: Arguments
 * @argc: count the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}

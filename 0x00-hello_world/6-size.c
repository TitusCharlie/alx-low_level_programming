#include <stdio.h>

/**
*Write a C program that prints the size of various types on the computer it is compiled and run on.
*You should produce the exact same output as in the example
*Warnings are allowed
*Your program should return 0
*You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
*/

int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}

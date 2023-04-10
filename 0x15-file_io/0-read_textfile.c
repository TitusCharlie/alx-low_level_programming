#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to standart output.
 * @filename: it is the text file being read
 * @letters: it is the number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 * DO NOT COPY TLC.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t function;
	ssize_t writing;
	ssize_t typing;

	function = open(filename, O_RDONLY);
	if (function == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	typing = read(function, buffer, letters);
	writing = write(STDOUT_FILENO, buffer, typing);

	free(buffer);
	close(function);
	return (writing);
}


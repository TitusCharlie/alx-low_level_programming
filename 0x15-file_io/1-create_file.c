#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: It is a pointer to the name of the file to create.
 * @text_content: It is a  pointer to a string to
 * write to the file
 * DO NOT COPY TLC
 * Return: If the function fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int function, writing, length = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	function = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writing = write(function, text_content, length);

	if (function == -1 || writing == -1)
	return (-1);

	close(function);

	return (1);
}


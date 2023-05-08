#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: pointer to the name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int bytes_write, length;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = 0;

		while (text_content[length])
			length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_write = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || bytes_write == -1)
	{
		return (-1);
	}

	close(file_descriptor);
	return (1);
}

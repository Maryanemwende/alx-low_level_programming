#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: pointer to name of file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_write, length = 0;

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

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	bytes_write = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || bytes_write == -1)
	{
		return (-1);
	}
	close(file_descriptor);

	return (1);
}

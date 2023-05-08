#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 *
 * @filename: pointer to the name of the file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, bytes_read, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	file_descriptor = open(filename, O_RDONLY);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (file_descriptor == -1 || bytes_read == -1 || bytes_written == -1 ||
			bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);

	return (bytes_written);
}

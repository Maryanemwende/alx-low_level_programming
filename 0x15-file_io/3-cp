#include "main.h"
#include <stdio.h>

/**
 * buffer_size - size allocation for buffer
 * @file_name: name of file
 * Return: pointer to buffer
 */
char *buffer_size(char *file_name)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}

	return (buf);
}

/**
 * file_closer - closes fd
 * @file_descriptor: fd to close
 */
void file_closer(int file_descriptor)
{
	int y;

	y = close(file_descriptor);

	if (y == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - copies file contents to another file
 *
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 (Sucess)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_write;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = buffer_size(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	bytes_read = read(fd_from, buf, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_from == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		bytes_write = write(fd_to, buf, bytes_read);
		if (fd_to == -1 || bytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		bytes_read = read(fd_from, buf, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);

	free(buf);
	file_closer(fd_from);
	file_closer(fd_to);
	return (0);
}

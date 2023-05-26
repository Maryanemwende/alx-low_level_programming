#include "main.h"

/**
 * check_file - checks for existence of file
 * @fdFrom: file to read from
 * @fdTo: dest
 * @argv: pointer to arry
 */
void check_file(int fdFrom, int fdTo, char **argv)
{
	if (fdFrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}

	if (fdTo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
				argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point
 *
 * @argc: the argument count
 * @argv: array of pointers to arguments
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int fdFrom, fdTo, read_bytes, written, file_close;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdFrom = open(argv[1], O_RDONLY);
	fdTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_file(fdFrom, fdTo, argv);

	read_bytes = 1024;
	while (read_bytes == 1024)
	{
		read_bytes = read(fdFrom, buffer, 1024);
		if (read_bytes < 0)
		{
			check_file(-1, 0, argv);
		}
		written = write(fdTo, buffer, read_bytes);
		if (written < 0)
		{
			check_file(0, -1, argv);
		}
	}
	file_close = close(fdFrom);
	if (file_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdFrom);
		exit(100);
	}
	return (0);
}

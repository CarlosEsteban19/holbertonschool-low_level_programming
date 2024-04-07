#include "main.h"
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 97-100 on errors
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytesRD, bytesWR;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd_from);
		return (99);
	}

	while ((bytesRD = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytesWR = write(fd_to, buffer, bytesRD);
		if (bytesWR != bytesRD)
		{
			dprintf(STDERR_FILENO, "Error: Write to file %s failed\n", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (bytesRD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Read from file %s failed\n", file_from);
		close(fd_from);
		close(fd_to);
		return (98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
		return (100);
	}

	return 0;
}


#include "main.h"
/**
 * print_error - Prints error message and returns error code
 * @msg: Error message
 * @code: Error code
 * @fd_from: File descriptor to close (if needed)
 * @fd_to: File descriptor to close (if needed)
 * Return: Error code
 */
int print_error(const char *msg, int code, int fd_from, int fd_to)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	if (fd_from != -1)
		close(fd_from);
	if (fd_to != -1)
		close(fd_to);
	return (code);
}
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, or error codes
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	int fd_from = -1, fd_to = -1;
	char buffer[1024];
	ssize_t bytesRD, bytesWR;

	if (argc != 3)
		return (print_error("Usage: cp file_from file_to", 97, fd_from, fd_to));

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (print_error("Error: Can't read from file", 98, fd_from, fd_to));

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		return (print_error("Error: Can't write to file", 99, fd_from, fd_to));

	while ((bytesRD = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytesWR = write(fd_to, buffer, bytesRD);
		if (bytesWR != bytesRD)
			return (print_error("Error: Can't write to file", 99, fd_from, fd_to));
	}

	if (bytesRD == -1)
		return (print_error("Error: Can't read from file", 98, fd_from, fd_to));

	if (close(fd_from) == -1 || close(fd_to) == -1)
		return (print_error("Error: Can't close fd ", 100, fd_from, fd_to));

	return (0);
}

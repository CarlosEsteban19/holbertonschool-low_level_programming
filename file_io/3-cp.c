#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int result;
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	ssize_t bytesRD;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	bytesRD = read_textfile(file_from, sizeof(buffer));
	if (bytesRD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	result = create_file(file_to, buffer);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	if (close(STDIN_FILENO) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", STDIN_FILENO);
		return (100);
	}
	if (close(STDOUT_FILENO) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", STDOUT_FILENO);
		return (100);
	}
	if (close(STDERR_FILENO) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", STDERR_FILENO);
		return (100);
	}
	return (0);
}

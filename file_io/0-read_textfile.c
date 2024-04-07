#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
/**
 * read_textfile - Reads and prints a text file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed,
 *         or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer;
	ssize_t bytesRD = 0, bytesWR;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while ((size_t)bytesRD < letters && read(fd, &buffer, 1) == 1)
	{
		bytesWR = write(STDOUT_FILENO, &buffer, 1);
		if (bytesWR != 1)
		{
			close(fd);
			return (0);
		}
		bytesRD++;
	}
	close(fd);
	return (bytesRD);
}

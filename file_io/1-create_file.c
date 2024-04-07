#include "main.h"
/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *ptr = text_content;
	ssize_t bytesWR, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	while (*ptr != '\0')
		len++, ptr++;

	if (len > 0 && text_content != NULL)
	{
		bytesWR = write(fd, text_content, len);
		if (bytesWR == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

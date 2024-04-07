#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	char *ptr = text_content;
	ssize_t bytesWR, len = 0;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*ptr != '\0')
			len++, ptr++;
	}

	bytesWR = write(fd, text_content, len);
	if (bytesWR != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
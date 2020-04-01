#include "holberton.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 1000);
	if (fd == -1)
		return (0);
	if (text_content)
	{
		while (text_content)
			i++;
		w = write(fd, text_content, i);
		if (w == -1)
			return (0);
	}
	close(fd);
	return (1);
}

